// attributes: thunk
ssize_t pread64(int fd, void *buf, size_t nbytes, __off64_t offset)
{
  return pread64(fd, buf, nbytes, offset);
}

