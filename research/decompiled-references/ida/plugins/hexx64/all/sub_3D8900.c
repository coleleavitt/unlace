__int64 __fastcall sub_3D8900(_QWORD *a1, __int64 a2, __m128 a3)
{
  unsigned __int64 *v4; // rsi
  char *v5; // rax
  unsigned __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // r13
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r14
  __int64 v16; // r15
  char *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r11
  char *v20; // rbp
  unsigned __int64 v21; // r14
  char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // cf
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // [rsp+8h] [rbp-60h]

  if ( a2 )
  {
    v4 = *(unsigned __int64 **)(a2 + 8);
    if ( v4 )
    {
      v5 = (char *)&unk_4317E0;
      while ( *(_DWORD *)(a2 + 312) != *(_DWORD *)v5 )
      {
        v5 += 4;
        if ( v5 == "$ mbui.view_id" )
          return 0;
      }
      if ( *(_QWORD *)(a2 + 1336) )
      {
        sub_148300(a2, 1, a3);
        v4 = *(unsigned __int64 **)(a2 + 8);
        if ( !v4 )
          v4 = *(unsigned __int64 **)(a2 + 16);
      }
      v8 = *v4;
      v9 = (__int64 *)sub_3D4440((__int64)a1, *v4);
      if ( v9 == v10 )
      {
LABEL_17:
        v11 = operator new(0x68u);
        *(_QWORD *)v11 = &off_4E8E18;
        v12 = *(__int64 **)(a2 + 8);
        if ( !v12 )
          v12 = *(__int64 **)(a2 + 16);
        v13 = *v12;
        *(_QWORD *)(v11 + 16) = 0;
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v11 + 8) = v13;
        LODWORD(v13) = *(_DWORD *)(a2 + 312);
        *(_DWORD *)(v11 + 48) = -1;
        *(_QWORD *)(v11 + 56) = (unsigned int)v13;
        *(_OWORD *)(v11 + 24) = 0;
        sub_332990((_QWORD *)(a2 + 8));
        v14 = a1[253];
        a3 = 0;
        v15 = a1[252];
        *(_QWORD *)(v11 + 64) = 0;
        *(_QWORD *)v11 = &off_4E8E58;
        v16 = v15 + 8 * v14;
        *(_OWORD *)(v11 + 72) = 0;
        *(_OWORD *)(v11 + 88) = 0;
        v17 = (char *)sub_3CF2B0(v15, v16, v8);
        v20 = &v17[-v15];
        v21 = a1[254];
        if ( v21 < v19 + 1 )
        {
          v26 = qvector_reserve((__int64)(a1 + 252), 0, v19 + 1, 8);
          v27 = a1[253];
          v28 = v26;
          v29 = (__int64 *)a1[252];
          v30 = a1[254];
          a1[254] = v21;
          v31 = v27 - 1;
          if ( v31 >= 0 )
          {
            v32 = v28;
            do
            {
              v33 = *v29;
              v32 += 8;
              ++v29;
              *(_QWORD *)(v32 - 8) = v33;
              v25 = v31-- == 0;
            }
            while ( !v25 );
            v29 = (__int64 *)a1[252];
          }
          v34 = v30;
          qfree((__int64)v29);
          a1[252] = v28;
          v17 = &v20[v28];
          a1[254] = v34;
          v18 = 8LL * a1[253];
          v16 = v18 + v28;
        }
        v22 = &v17[v18 - (_QWORD)v20 + 8];
        v23 = ((v18 - (__int64)v20) >> 3) - 1;
        if ( v23 >= 0 )
        {
          do
          {
            v24 = *(_QWORD *)(v16 - 8);
            v16 -= 8;
            v22 -= 8;
            *(_QWORD *)v22 = v24;
            v25 = v23-- == 0;
          }
          while ( !v25 );
        }
        *(_QWORD *)v17 = v11;
        ++a1[253];
        sub_3D57D0(v11, a2, 0.0);
      }
      else
      {
        while ( *(_DWORD *)(*v9 + 56) != *(_DWORD *)(a2 + 312) )
        {
          if ( v10 == ++v9 )
            goto LABEL_17;
        }
        sub_3D57D0(*v9, a2, *(double *)a3.m128_u64);
      }
      if ( *(_QWORD *)(a2 + 1336) )
        sub_148300(a2, 0, a3);
    }
  }
  return 0;
}

