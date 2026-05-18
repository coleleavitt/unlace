__int64 __fastcall sub_D6100(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)sub_D1E10(96, a2);
  result = 7;
  if ( v2 )
  {
    *v2 = 0;
    v2[11] = 0;
    memset(
      (void *)((unsigned __int64)(v2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v2 - (((_DWORD)v2 + 8) & 0xFFFFFFF8) + 96) >> 3));
    *a1 = v2;
    return 0;
  }
  return result;
}
