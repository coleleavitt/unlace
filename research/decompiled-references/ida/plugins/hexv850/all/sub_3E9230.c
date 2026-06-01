void __fastcall sub_3E9230(__int64 a1, __int64 a2, double a3)
{
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int16 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebp
  __int64 v24; // r14
  _DWORD *v25; // rdi
  __int64 (__fastcall *v26)(_DWORD *, unsigned int); // rax
  __int64 v27; // r12
  int *v28; // rax
  int v29; // edx
  int v30; // eax
  __int64 v31; // [rsp-10h] [rbp-68h]
  __int64 v32; // [rsp-10h] [rbp-68h]
  __int64 v33; // [rsp-8h] [rbp-60h]
  __int64 v34; // [rsp+0h] [rbp-58h]
  int v35; // [rsp+Ch] [rbp-4Ch]
  int v36; // [rsp+10h] [rbp-48h]
  int v37; // [rsp+14h] [rbp-44h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned __int16 *)(a2 + 26) + 1 - *(unsigned __int16 *)(a2 + 24);
  if ( v3 > 0 )
  {
    v4 = a1;
    v5 = *(_QWORD *)(a1 + 832);
    v6 = *(_WORD *)(a1 + 48);
    v7 = *(_QWORD *)(v5 + 584);
    if ( !v7 )
      goto LABEL_25;
    v8 = *(int *)(*(_QWORD *)(v5 + 576) + 4 * v7 - 4);
    *(_QWORD *)(v5 + 584) = v7 - 1;
    v36 = v8;
    sub_1D14D0(
      a1,
      3u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) * v3,
      0x3BEA45E214ADDC55LL,
      v8,
      0);
    v9 = *(_QWORD *)(a1 + 832);
    v10 = *(_QWORD *)(v9 + 584);
    if ( !v10 )
      goto LABEL_25;
    v11 = *(int *)(*(_QWORD *)(v9 + 576) + 4 * v10 - 4);
    *(_QWORD *)(v9 + 584) = v10 - 1;
    v12 = *(_QWORD *)(a1 + 832);
    v35 = v11;
    v13 = *(int *)(v12 + 60);
    v14 = *(_DWORD *)(v12 + 84);
    if ( v6 == 214 )
      sub_3E8420(a1, 4u, v14, v13, 0x3BEA45E214ADDC55LL, v11, 0);
    else
      sub_3E8420(a1, 0xDu, v14, v13, v8, v11, 0);
    v15 = *(_QWORD *)(a1 + 832);
    v16 = *(_QWORD *)(v15 + 584);
    if ( !v16 )
LABEL_25:
      sub_3E4140(a3);
    v17 = *(int *)(*(_QWORD *)(v15 + 576) + 4 * v16 - 4);
    *(_QWORD *)(v15 + 584) = v16 - 1;
    v37 = v17;
    v34 = v17;
    sub_1D14D0(
      a1,
      3u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
      *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
      0x3BEA45E214ADDC55LL,
      v17,
      0);
    v21 = v31;
    if ( *(_WORD *)(a2 + 26) >= *(_WORD *)(a2 + 24) )
    {
      v38 = v8;
      v22 = *(unsigned __int16 *)(a2 + 24);
      v24 = v11;
      do
      {
        while ( 1 )
        {
          v25 = *(_DWORD **)(a1 + 832);
          v26 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v25 + 168LL);
          if ( v26 == sub_3E40F0 )
          {
            if ( (unsigned int)v22 > 0x1F )
            {
              if ( v22 == 48 )
                v27 = (int)v25[120];
              else
                v27 = v22 == 49 ? (int)v25[121] : -1LL;
            }
            else
            {
              v27 = v25[88] + v22 * v25[20];
            }
          }
          else
          {
            v30 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64, __int64, __int64))v26)(
                    v25,
                    (unsigned int)v22,
                    v18,
                    v19,
                    v20,
                    v21);
            v25 = *(_DWORD **)(a1 + 832);
            v27 = v30;
          }
          sub_3E8420(a1, 0xDu, v25[21], v24, v34, v24, 0);
          v28 = *(int **)(a1 + 832);
          v29 = v28[20];
          if ( v6 != 214 )
            break;
          ++v22;
          sub_3E8420(a1, 1u, v29, v27, v28[16], v24, v28[21]);
          v19 = v32;
          if ( *(unsigned __int16 *)(a2 + 26) < v22 )
            goto LABEL_15;
        }
        ++v22;
        sub_3E8420(a1, 2u, v29, v28[16], v24, v27, v28[21]);
        v18 = v33;
      }
      while ( *(unsigned __int16 *)(a2 + 26) >= v22 );
LABEL_15:
      v8 = v38;
      v4 = a1;
    }
    sub_3E62F0(*(_QWORD *)(v4 + 832), v37);
    sub_3E62F0(*(_QWORD *)(v4 + 832), v35);
    sub_3E8420(
      v4,
      (v6 == 214) + 12,
      *(_DWORD *)(*(_QWORD *)(v4 + 832) + 84LL),
      *(int *)(*(_QWORD *)(v4 + 832) + 60LL),
      v8,
      *(int *)(*(_QWORD *)(v4 + 832) + 60LL),
      0);
    sub_3E62F0(*(_QWORD *)(v4 + 832), v36);
  }
}

