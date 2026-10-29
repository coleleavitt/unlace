__int64 __fastcall sub_43A80(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 (__fastcall ***a4)(_QWORD, __int64 **),
        double a5,
        double a6,
        double a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned int)sub_30C10((__int64)a1, (__int64)a2, &v15, a5, a6, a7) != 1 )
    goto LABEL_17;
  if ( a3 > 43 )
  {
    if ( under_debugger )
      goto LABEL_19;
    interr(30206);
LABEL_17:
    if ( !under_debugger )
      interr(30205);
LABEL_19:
    BUG();
  }
  v10 = v15 + 16LL * a3;
  v11 = *(_QWORD *)(v10 + 40);
  if ( v11 )
    return sub_432E0(a1, v11, *(unsigned int *)(v10 + 48), a3, a4);
  v17 = 0;
  v16 = 0;
  v13 = sub_305A0((__int64)a1, a2, a3, &v16, 0.0, a6, a7);
  v11 = v16;
  if ( v13 == 1 )
  {
    v14 = v17;
    *(_DWORD *)(v10 + 48) = v17;
    if ( v14 < *((_QWORD *)&v17 + 1) )
    {
      if ( v14 )
      {
        if ( v11 )
        {
          v11 = qrealloc(v11, 4 * v14);
          if ( !v11 )
            v11 = v16;
        }
      }
    }
    *(_QWORD *)(v10 + 40) = v11;
    return sub_432E0(a1, v11, *(unsigned int *)(v10 + 48), a3, a4);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return 2147500037LL;
}

