import socket
import struct
import sys

multicast_group = '172.24.17.181'
server_address = ('',10000)

sock =socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

sock.bind(server_address)

group = socket.inet.aton(multicast_group)
mreq = struct.pack('4sl', group, socket.INADDR_ANY)
sock.setsockopt(socket.IPPROTO_IP, socket.IP_ADD_MEMBERSHIP, mreq)

while True:
    print >>sys.stderr, '\nwaiting to receive message'
	data , address = sock.recvfrom(1024)
    
    print >>sys.stderr, 'received %s bytes from %s' % (len(data), address)
	print >>sys.stderr, data

	print >>sys.stderr, 'sending acknowledgement to', address
	sock.sendto('ack', address)
