unsigned __int64 __fastcall sub_21C070(__int64 *a1, _QWORD *a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v8; // [rsp+Ch] [rbp-3Ch] BYREF
  _DWORD v9[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v5 = *a1;
  v10 = __readfsqword(0x28u);
  (*(void (__fastcall **)(_DWORD *, __int64 *, int *, __int64))(v5 + 104))(v9, a1, &v8, a3);
  if ( !v9[0] )
  {
    if ( !under_debugger )
      sub_383060(0xCC0Cu, a4);
    BUG();
  }
  v6 = a2[2];
  a2[1] = 0;
  if ( v6 )
  {
    a2[3] = 0;
    qfree(v6);
    a2[2] = 0;
    a2[4] = 0;
  }
  sub_1C31B0((__int64)v9, (__int64)a2, v8, 0, 0, a4, a5);
  cleanup_argloc();
  return v10 - __readfsqword(0x28u);
}

