unsigned __int64 __fastcall sub_41F00(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbx
  int v19; // r14d
  _DWORD *v20; // r13
  int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // r13
  int v34; // r12d
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+10h] [rbp-78h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-58h]
  __int128 v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 184) + 80LL * a2 + 77) & 8) == 0 )
  {
    v41 = qvector_reserve();
    *(_QWORD *)v41 = a3;
    v6 = v41;
    *(_DWORD *)(v41 + 8) = a2;
    v7 = 1;
    while ( v7 )
    {
      while ( 1 )
      {
        v8 = v7--;
        v9 = v6 + 16 * v8 - 16;
        v10 = *(int *)(v9 + 8);
        v11 = *(_QWORD *)v9;
        v42 = v7;
        v12 = *(_QWORD *)(a1 + 184) + 80 * v10;
        v13 = *(_DWORD *)(v12 + 76);
        if ( (v13 & 0x800) != 0 )
          break;
        BYTE1(v13) |= 8u;
        v14 = v10 << 6;
        v43 = 0;
        *(_DWORD *)(v12 + 76) = v13;
        v15 = *(_QWORD *)(a1 + 80);
        v44 = 0;
        v16 = *(_QWORD *)(v15 + v14 + 48);
        if ( (int)v16 > 0 )
        {
          v17 = 0;
          v18 = 4LL * (unsigned int)(v16 - 1);
          while ( 1 )
          {
            v19 = *(_DWORD *)(*(_QWORD *)(v15 + v14 + 40) + v17);
            if ( v19 >= 0 && *(_DWORD *)(a1 + 104) > v19 )
            {
              v20 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 80LL * v19);
              v21 = v20[19];
              if ( (v21 & 0x400) == 0 )
              {
                v22 = v20[2] - 1;
                if ( v22 < 0 )
                {
                  v26 = v11;
                }
                else
                {
                  v23 = 32LL * v22;
                  v24 = (_QWORD *)(*(_QWORD *)v20 + v23 + 8);
                  v25 = *(_QWORD *)v20 + v23 - 24 - 32LL * (unsigned int)v22;
                  v26 = v11;
                  if ( (((_BYTE)v24 - (_BYTE)v25) & 0x20) == 0 || (v26 = v11 - *v24, v24 -= 4, (_QWORD *)v25 != v24) )
                  {
                    do
                    {
                      v27 = v26 - *v24;
                      v24 -= 8;
                      v26 = v27 - v24[4];
                    }
                    while ( (_QWORD *)v25 != v24 );
                  }
                }
                v39 = v11;
                sub_417C0((__int64 *)a1, v19, v26);
                v21 = v20[19];
                v11 = v39;
              }
              if ( (v21 & 0x800) == 0 && *((_QWORD *)v20 + 1) )
              {
                v35 = v43;
                v36 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
                v37 = v44;
                if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
                {
                  v40 = v11;
                  v43 = qvector_reserve();
                  v35 = v43;
                  v11 = v40;
                  v37 = v44;
                }
                v38 = 16 * v37 + v35;
                *(_QWORD *)v38 = v36;
                *(_DWORD *)(v38 + 8) = v19;
                *(_QWORD *)&v44 = v44 + 1;
              }
            }
            if ( v18 == v17 )
              break;
            v15 = *(_QWORD *)(a1 + 80);
            v17 += 4;
          }
          v28 = v44;
          if ( (_QWORD)v44 )
          {
            v29 = v42;
            do
            {
              v31 = v43 + 16 * v28 - 16;
              v32 = v41;
              v33 = *(_QWORD *)v31;
              v34 = *(_DWORD *)(v31 + 8);
              v45 = v28 - 1;
              if ( v29 != -1 )
              {
                v41 = qvector_reserve();
                v29 = v42;
                v32 = v41;
              }
              v30 = 16 * v29 + v32;
              *(_QWORD *)v30 = v33;
              *(_DWORD *)(v30 + 8) = v34;
              v29 = v42 + 1;
              v28 = v45;
              ++v42;
            }
            while ( v45 );
          }
          if ( v43 )
            qfree();
          v6 = v41;
        }
        v7 = v42;
        if ( !v42 )
          goto LABEL_24;
      }
    }
LABEL_24:
    if ( v6 )
      qfree();
  }
  return v46 - __readfsqword(0x28u);
}
