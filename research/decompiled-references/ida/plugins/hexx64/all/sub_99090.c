__int64 __fastcall sub_99090(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r15d
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // [rsp+0h] [rbp-A8h]
  int v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  __int128 v29; // [rsp+28h] [rbp-80h]
  __int64 v30[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v31; // [rsp+50h] [rbp-58h]
  __int128 v32; // [rsp+58h] [rbp-50h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v6 = 0;
  v33 = __readfsqword(0x28u);
  if ( *a3 )
  {
    v29 = 0;
    sub_127FE0(a1, (__int64)&v27, (__int64)a3, 0, a5, a6, v25, v26, 0, 0, 0);
    sub_64000(v30, (__int64)&v27, 0.0);
    v12 = v29;
    v31 = nullptr;
    v32 = 0;
    if ( (_QWORD)v29 )
    {
      v31 = (void *)qalloc_or_throw(16 * v29, (__int64)&v27, v10, v11);
      *((_QWORD *)&v32 + 1) = v12;
      memcpy(v31, src, 16 * v12);
      *(_QWORD *)&v32 = v12;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    do
    {
      v15 = *(_QWORD *)(a2 + 8);
      if ( !v15 )
        break;
      v16 = sub_A9D90(a1, &v27, v15, 0, 1u);
      a2 = v16;
      if ( !v16 )
        break;
      v20 = v16 + 32;
      v21 = sub_129FA0((__int64)a3, v13, v16 + 32, v17, v18, v19);
      v24 = (unsigned int)(v21 - 2);
      if ( (unsigned int)v24 > 1 || !(unsigned __int8)sub_AB6D0(a1, (unsigned int *)a2, v20, (v21 != 2) | 2u) )
      {
        v14 = sub_129FA0((__int64)a3, v13, a2 + 48, v24, v22, v23);
        if ( (unsigned int)(v14 - 2) > 1
          || !(unsigned __int8)sub_AB6D0(a1, (unsigned int *)a2, (int)a2 + 48, (v14 != 2) | 2u) )
        {
          continue;
        }
      }
      v6 = 1;
      goto LABEL_16;
    }
    while ( !sub_122C30((__int64)v30, (__int64)&v27) );
    v6 = 0;
LABEL_16:
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree((__int64)v31);
    }
    qfree(v30[0]);
    if ( src )
    {
      *(_QWORD *)&v29 = 0;
      qfree((__int64)src);
    }
    qfree(v27);
  }
  return v6;
}

