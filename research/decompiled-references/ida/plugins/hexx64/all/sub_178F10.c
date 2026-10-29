__int64 __fastcall sub_178F10(_QWORD *a1, int a2, __int64 a3, int a4, __int64 a5, double a6)
{
  __int64 v6; // r13
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 i; // r15
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-60h]
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v6 = a4;
  v20 = __readfsqword(0x28u);
  if ( a4 != a2 )
  {
    do
    {
      v8 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104LL);
      v9 = v8 == sub_134310
         ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)v6) + 352LL)
         : v8((__int64)a1, v6);
      if ( v9 != 1 )
        return 0;
      v10 = a1[5];
      if ( (unsigned int)v6 >= *(_DWORD *)(v10 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a6);
        BUG();
      }
      for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8LL * (unsigned int)v6) + 48LL);
            i != a5;
            i = *(_QWORD *)(i + 8) )
      {
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v15 = &off_4DDF00;
        if ( (unsigned int)sub_11F760((_BYTE *)i, &v15) )
          return 0;
      }
      v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120LL);
      if ( v13 == sub_172890 )
        LODWORD(v6) = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8 * v6) + 344LL);
      else
        v6 = (int)v13((__int64)a1, v6, 0);
      a5 = 0;
    }
    while ( a2 != (_DWORD)v6 );
  }
  if ( a3 == a5 )
    return 0;
  while ( 1 )
  {
    v16 = 0;
    v17 = 0;
    v15 = &off_4DDF00;
    v18 = 0;
    v19 = 0;
    if ( (unsigned int)sub_11F760((_BYTE *)a3, &v15) )
      break;
    a3 = *(_QWORD *)(a3 + 8);
    if ( a3 == a5 )
      return 0;
  }
  return 1;
}

