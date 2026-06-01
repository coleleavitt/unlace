__int64 __fastcall sub_2CCD0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  _QWORD *v4; // rdi
  __int64 *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx

  v1 = a1[9];
  v2 = (v1 == 0) + ((v1 - a1[5]) >> 3) - 1;
  if ( 0x8E38E38E38E38E39LL * (((__int64)(a1[6] - a1[7]) >> 3) + ((__int64)(a1[4] - a1[2]) >> 3)) + 8 * v2 - v2 == 0x1C71C71C71C71C7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned __int64)(a1[1] - ((v1 - *a1) >> 3)) <= 1 )
  {
    sub_2C110((__int64)a1, 1u, 0);
    v1 = a1[9];
  }
  *(_QWORD *)(v1 + 8) = operator new(0x1F8u);
  v4 = (_QWORD *)a1[6];
  *v4 = 0xFFFFFFFFLL;
  v4[1] = -1;
  v4[2] = 0;
  copy_debug_event();
  v5 = (__int64 *)(a1[9] + 8LL);
  a1[9] = v5;
  result = *v5;
  v7 = *v5 + 504;
  a1[7] = result;
  a1[8] = v7;
  a1[6] = result;
  return result;
}

