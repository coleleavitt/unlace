__int64 __fastcall sub_F990(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(_QWORD *); // rax
  __int64 (__fastcall *v4)(__int64, int *); // rax
  int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v2 = *a1;
  v7 = __readfsqword(0x28u);
  v6 = -1;
  v3 = *(void (__fastcall **)(_QWORD *))(v2 + 32);
  if ( a2 < 0 )
  {
    v3(a1);
    return -1;
  }
  else
  {
    if ( (unsigned __int64)a2 < a1[24] )
      v6 = *(_DWORD *)(a1[23] + 8 * a2);
    v3(a1);
    v4 = *(__int64 (__fastcall **)(__int64, int *))(*a1 + 72LL);
    if ( v4 == sub_F920 )
      return sub_F920((__int64)a1, &v6);
    else
      return v4((__int64)a1, &v6);
  }
}

