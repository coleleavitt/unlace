__int64 __fastcall sub_286B40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // r12d
  __int64 *v5; // r13
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 **v10; // rax
  __int64 *v11; // rbx
  _QWORD *i; // r15
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r12
  __int64 *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v31; // [rsp+10h] [rbp-68h] BYREF
  int v32; // [rsp+18h] [rbp-60h]
  int v33; // [rsp+1Ch] [rbp-5Ch]
  int v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v2 = a1[3];
  v36 = __readfsqword(0x28u);
  v3 = **(_DWORD **)(a2 + 24);
  if ( (int)v2 - 1 > 0 )
  {
    v5 = (__int64 *)a2;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = (__int64 *)(a1[2] + 8LL * (unsigned int)(v2 - 1));
    v8 = (__int64)&v7[-(unsigned int)(v2 - 2) - 1];
    while ( 1 )
    {
      v9 = *v7;
      if ( (unsigned int)(v6 - 74) <= 2 )
        break;
      while ( 1 )
      {
        v6 = *(_DWORD *)(v9 + 8);
        if ( v6 != 71 )
          break;
        v10 = *(__int64 ***)(v9 + 24);
        v11 = *v10;
        if ( v3 == *((_DWORD *)*v10 + 7) )
        {
LABEL_13:
          for ( i = v11;
                !(unsigned __int8)sub_280890((__int64)(i + 2), 0) && !(unsigned __int8)sub_280970((__int64)(i + 2), 0);
                i = (_QWORD *)*i )
          {
            if ( v5 == i + 2 )
            {
              if ( *(_QWORD *)(a2 + 24) )
                j__qfree();
              *(_DWORD *)(a2 + 8) = 79;
              v35 = 0;
              *((_DWORD *)v11 + 7) = -1;
              v31 = -1;
              v34 = -1;
              v33 = v3;
              v32 = 75;
              v14 = j__qalloc_or_throw();
              *(_QWORD *)v14 = -1;
              *(_QWORD *)(v14 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 16) = 0xFFFFFFFFLL;
              *(_OWORD *)(v14 + 24) = 0;
              *(_QWORD *)(v14 + 40) = 0;
              *(_QWORD *)(v14 + 48) = 0;
              *(_QWORD *)(v14 + 56) = 0;
              *(_QWORD *)(v14 + 64) = 0;
              v15 = a1[8];
              v16 = a1[9];
              v35 = v14;
              sub_23BE20(v14, *(_QWORD *)(v15 + 216), v15, 2, *(unsigned __int8 *)(v16 + 130), 0);
              v17 = sub_23C730();
              v18 = v11;
              *(_QWORD *)(v14 + 64) = v17;
              v19 = v11[2];
              *v17 = v19;
              v31 = v19;
              while ( 1 )
              {
                v20 = sub_23C7C0((__int64)v17, -1);
                v22 = v18[2];
                v18[2] = *v20;
                v23 = *((_DWORD *)v20 + 2);
                *v20 = v22;
                LODWORD(v22) = *((_DWORD *)v18 + 6);
                *((_DWORD *)v18 + 6) = v23;
                v24 = *((_DWORD *)v20 + 3);
                *((_DWORD *)v20 + 2) = v22;
                LODWORD(v22) = *((_DWORD *)v18 + 7);
                *((_DWORD *)v18 + 7) = v24;
                v25 = v20[3];
                *((_DWORD *)v20 + 3) = v22;
                v26 = v18[5];
                v18[5] = v25;
                v20[3] = v26;
                if ( v5 == v18 + 2 )
                  break;
                v18 = (__int64 *)*v18;
              }
              if ( (unsigned __int8)sub_23CF40((__int64)v17, -1, v26, v25, v21) )
              {
                v27 = sub_23CCB0(v35);
                *((_DWORD *)sub_23C7C0((__int64)v17, v27) + 2) = 78;
              }
              v28 = v11[2];
              v11[2] = v31;
              v31 = v28;
              LODWORD(v28) = *((_DWORD *)v11 + 6);
              *((_DWORD *)v11 + 6) = v32;
              v32 = v28;
              LODWORD(v28) = *((_DWORD *)v11 + 7);
              *((_DWORD *)v11 + 7) = v33;
              v33 = v28;
              v29 = v11[5];
              v11[5] = v35;
              v35 = v29;
              sub_250450((__int64)&v31);
              return 1;
            }
          }
          return 0;
        }
        while ( v5 != v11 + 2 )
        {
          v11 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 7) == v3 )
            goto LABEL_13;
        }
        if ( --v7 == (__int64 *)v8 )
          return 0;
        v5 = (__int64 *)v9;
        v9 = *v7;
      }
      if ( --v7 == (__int64 *)v8 )
        return 0;
      v5 = (__int64 *)v9;
    }
  }
  return 0;
}

