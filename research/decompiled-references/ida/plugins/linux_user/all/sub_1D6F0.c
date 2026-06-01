__int64 __fastcall sub_1D6F0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx

  v1 = a1[5];
  v2 = (a1[9] == 0) + ((a1[9] - v1) >> 3) - 1;
  if ( 0x8E38E38E38E38E39LL * (((__int64)(a1[6] - a1[7]) >> 3) + ((__int64)(a1[4] - a1[2]) >> 3)) + 8 * v2 - v2 == 0x1C71C71C71C71C7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( v1 == *a1 )
  {
    sub_1D500((__int64)a1, 1u, 1u);
    v1 = a1[5];
  }
  *(_QWORD *)(v1 - 8) = operator new(0x1F8u);
  v3 = (_QWORD *)(a1[5] - 8LL);
  a1[5] = v3;
  v4 = (_QWORD *)*v3;
  v5 = *v3 + 504LL;
  a1[3] = v4;
  a1[4] = v5;
  a1[2] = v4 + 54;
  v4[54] = 0xFFFFFFFFLL;
  v4[55] = -1;
  v4[56] = 0;
  return copy_debug_event();
}

