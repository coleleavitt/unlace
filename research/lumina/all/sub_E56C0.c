__int64 *__fastcall sub_E56C0(__int64 *a1, __int64 *a2, int *a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx

  v4 = sub_E5530(a1, a2, *a3, 1);
  if ( v4 )
  {
    v5 = v4;
    memcpy(v4 + 14, a3 + 2, 104LL * *a3);
    sub_C9250(*a1, a3);
    *((_BYTE *)v5 + 68) |= *((_BYTE *)v5 + 172) & 0x40;
    return v5;
  }
  else
  {
    sub_D8260(*a1, a3);
    return a2;
  }
}
