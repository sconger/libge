// FileServiceLinuxAio.cpp

#ifdef __linux__

#include "gepriv/aio/FileServiceLinuxAio.h"

FileServiceLinuxAio::FileServiceLinuxAio()
{

}

FileServiceLinuxAio::~FileServiceLinuxAio()
{

}

void FileServiceLinuxAio::process()
{

}

void FileServiceLinuxAio::submitRead(AioFile* aioFile,
                                     AioServer::fileCallback callback,
                                     void* userData,
                                     uint64 pos,
                                     char* buffer,
                                     uint32 bufferLen)
{

}

void FileServiceLinuxAio::submitWrite(AioFile* aioFile,
                                      AioServer::fileCallback callback,
                                      void* userData,
                                      uint64 pos,
                                      const char* buffer,
                                      uint32 bufferLen)
{

}

#endif // #ifdef __linux__
