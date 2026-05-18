__int64 __fastcall sub_92330(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  unsigned int v6; // r14d
  void *v7; // r15
  void *(__fastcall *v8)(__int64, unsigned __int8, __int64); // rax
  __int64 v9; // rax
  void *v10; // rbp
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  void *v15; // rdi
  __int64 v17; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 296);
  v20 = __readfsqword(0x28u);
  sub_19A520(v3);
  v5 = a2[8];
  *(_BYTE *)(a1 + 312) = v5;
  sub_169470(&ptr, v5);
  (*(void (__fastcall **)(unsigned __int8 *, void **, __int64))(*(_QWORD *)a2 + 16LL))(a2, &ptr, 8);
  v6 = a2[8];
  v7 = &loc_1A06DB;
  v8 = *(void *(__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v8 == sub_92260 )
  {
    do
    {
      while ( 1 )
      {
        v9 = sub_167900(a1, v6, &ptr);
        v10 = (void *)v9;
        if ( !v9 )
          break;
        if ( !*(_BYTE *)(a1 + 69) )
          goto LABEL_8;
        v11 = *(unsigned __int8 *)(v9 + 4);
        if ( (_BYTE)v11 != 12 )
        {
          v12 = (unsigned int)(v11 - 91);
          if ( (unsigned __int8)v12 > 0x14u || !_bittest64((const __int64 *)&v7, v12) )
            goto LABEL_8;
        }
        v13 = sub_167E00(a1, v10);
        if ( !v13 )
          goto LABEL_8;
        v17 = v13;
        j__free(v10);
        sub_90820(a1, v17);
        v19 = 0;
      }
    }
    while ( v19 && *(_QWORD *)(a1 + 256) && (unsigned __int8)sub_91B70(a1) );
    v14 = 0;
  }
  else
  {
    v10 = v8(a1, a2[8], (__int64)&ptr);
    if ( v10 )
    {
LABEL_8:
      v14 = sub_167E00(a1, v10);
      j__free(v10);
    }
    else
    {
      v14 = 0;
    }
  }
  v15 = ptr;
  *(_BYTE *)(a1 + 312) = 10;
  if ( v15 )
  {
    v19 = 0;
    j__free(v15);
  }
  sub_19A570(v3);
  return v14;
}
