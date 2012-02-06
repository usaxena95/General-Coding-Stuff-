import socket
import struct
import sys

message = 'very imp data'
multicast_group = ('172.24.17.181', 10000)

#a udp socket is created
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

sock.settimeout(0.2)

ttl =  struct.pack('b', 1)
sock.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_TTL, ttl)

try:
	print >>sys.stderr, 'sending message'
	sent = sock.sendto(message, multicast_group)

	while True:
		print >>sys.stderr, 'waiting'
		try:
			data, server = sock.recvfrom(16)
		except socket.timeout:
			print >>sys.stderr, 'timed out'
			break
		else:
			print>>stderr, 'received "%s" from %s' % (data,server)
finally:
	print >>sys.stderr, 'closing socket'
	sock.close()

