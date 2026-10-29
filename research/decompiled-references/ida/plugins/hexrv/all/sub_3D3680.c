__int64 __fastcall sub_3D3680(_QWORD *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rsi
  char *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r11
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // r11
  char *v25; // rsi
  __int64 v26; // r9
  char *v27; // rbp
  unsigned __int64 v28; // r14
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // cf
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // [rsp+8h] [rbp-60h]

  if ( a2 )
  {
    v7 = *(unsigned __int64 **)(a2 + 8);
    if ( v7 )
    {
      v8 = (char *)&unk_40B200;
      v9 = *(unsigned int *)(a2 + 312);
      while ( (_DWORD)v9 != *(_DWORD *)v8 )
      {
        v8 += 4;
        if ( v8 == "$ mbui.view_id" )
          return 0;
      }
      if ( *(_QWORD *)(a2 + 1336) )
      {
        sub_143E40(a2, 1, v9, (__int64)"$ mbui.view_id", a6);
        v7 = *(unsigned __int64 **)(a2 + 8);
        if ( !v7 )
          v7 = *(unsigned __int64 **)(a2 + 16);
      }
      v12 = *v7;
      v13 = (__int64 *)sub_3CF1C0((__int64)a1, *v7);
      if ( v13 == v14 )
      {
LABEL_17:
        v18 = operator new(0x68u);
        *(_QWORD *)v18 = &off_4BB838;
        v19 = *(__int64 **)(a2 + 8);
        if ( !v19 )
          v19 = *(__int64 **)(a2 + 16);
        v20 = *v19;
        *(_QWORD *)(v18 + 16) = 0;
        *(_QWORD *)(v18 + 40) = 0;
        *(_QWORD *)(v18 + 8) = v20;
        LODWORD(v20) = *(_DWORD *)(a2 + 312);
        *(_DWORD *)(v18 + 48) = -1;
        *(_QWORD *)(v18 + 56) = (unsigned int)v20;
        *(_OWORD *)(v18 + 24) = 0;
        sub_32D5D0((_QWORD *)(a2 + 8));
        v21 = a1[253];
        v22 = a1[252];
        *(_QWORD *)(v18 + 64) = 0;
        *(_QWORD *)v18 = &off_4BB878;
        v23 = v22 + 8 * v21;
        *(_OWORD *)(v18 + 72) = 0;
        *(_OWORD *)(v18 + 88) = 0;
        v25 = (char *)sub_3CA030(v22, v23, v12);
        v27 = &v25[-v22];
        v28 = a1[254];
        if ( v28 < v24 + 1 )
        {
          v33 = qvector_reserve();
          v34 = a1[253];
          v35 = v33;
          v36 = (__int64 *)a1[252];
          v37 = a1[254];
          a1[254] = v28;
          v38 = v34 - 1;
          if ( v38 >= 0 )
          {
            v39 = v35;
            do
            {
              v40 = *v36;
              v39 += 8;
              ++v36;
              *(_QWORD *)(v39 - 8) = v40;
              v32 = v38-- == 0;
            }
            while ( !v32 );
          }
          v41 = v37;
          qfree();
          a1[252] = v35;
          v25 = &v27[v35];
          a1[254] = v41;
          v26 = 8LL * a1[253];
          v23 = v26 + v35;
        }
        v29 = &v25[v26 - (_QWORD)v27 + 8];
        v30 = ((v26 - (__int64)v27) >> 3) - 1;
        if ( v30 >= 0 )
        {
          do
          {
            v31 = *(_QWORD *)(v23 - 8);
            v23 -= 8;
            v29 -= 8;
            *(_QWORD *)v29 = v31;
            v32 = v30-- == 0;
          }
          while ( !v32 );
        }
        *(_QWORD *)v25 = v18;
        ++a1[253];
        sub_3D0550(v18, a2, 0.0);
      }
      else
      {
        while ( *(_DWORD *)(*v13 + 56) != *(_DWORD *)(a2 + 312) )
        {
          if ( v14 == ++v13 )
            goto LABEL_17;
        }
        sub_3D0550(*v13, a2, a3);
      }
      if ( *(_QWORD *)(a2 + 1336) )
        sub_143E40(a2, 0, v15, v16, v17);
    }
  }
  return 0;
}

