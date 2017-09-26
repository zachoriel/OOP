/* #include "Server.h"

ServerBrowserService::ServerBrowserService()
{
	serverCounter = 0;
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	// Find the index to put the server
	if (serverCounter < SERVERINFO_CAPACITY)
	{
		servers[serverCounter] = newServer;
		serverCounter++;
		return true;
	}
	else
	{
		return false;

	}
	// add that server to our array of servers

	// return true or false if we successfully added a server
	return false;
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize) const
{
	return 0;
}

int ServerBrowserService::getServersPintLimit(ServerInfo * dstArray, size_t dstSize, ) const
{
	return 0;
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;
	for (int i = 0; i < SERVERINFO_CAPACITY; i++)
	{
		dstArray[i] = servers[i];
		size++;
	}

	// thye size of the new array we coppied
	return size;
} */