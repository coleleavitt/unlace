unsigned __int64 __fastcall boost::asio::detail::epoll_reactor::interrupt(__int64 a1)
{
  int v1; // edx
  epoll_data_t v2; // rax
  int v3; // edi
  struct epoll_event event; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 120);
  v6 = __readfsqword(0x28u);
  v2.u64 = a1 + 120;
  v3 = *(_DWORD *)(a1 + 128);
  event.events = -2147483639;
  event.data = v2;
  epoll_ctl(v3, 3, v1, &event);
  return v6 - __readfsqword(0x28u);
}

