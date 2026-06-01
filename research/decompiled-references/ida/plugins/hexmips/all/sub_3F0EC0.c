__int64 __fastcall sub_3F0EC0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdx
  __int64 v16; // rbx
  signed int v17; // r13d
  int v18; // ebp
  char v19; // r12
  __int64 v20; // rcx
  char v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edi
  int v27; // r11d
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rax
  __int16 v31; // ax
  __int64 v33; // rax
  int v34; // ebx
  __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  int v39; // esi
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // [rsp+18h] [rbp-60h]
  int v44; // [rsp+30h] [rbp-48h]

  v15 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)(v15 - 122) > 0x14u )
    goto LABEL_51;
  v16 = a1;
  v17 = a2;
  v18 = a5;
  if ( ((1LL << ((unsigned __int8)v15 - 122)) & 0xA0005) == 0 )
  {
    if ( ((1LL << ((unsigned __int8)v15 - 122)) & 0x14000A) != 0 )
    {
      v19 = 0;
      if ( !(_DWORD)a5 )
        goto LABEL_5;
      goto LABEL_25;
    }
LABEL_51:
    if ( !under_debugger )
      sub_37E160(0xCCB0u, *(double *)a7.m128_u64);
    goto LABEL_60;
  }
  v19 = 1;
  if ( !(_DWORD)a5 )
  {
LABEL_5:
    if ( ((a4 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(0xCCAEu, *(double *)a7.m128_u64);
      goto LABEL_60;
    }
    if ( (unsigned __int16)v15 > 0x7Du )
    {
      if ( (unsigned __int16)(v15 - 139) <= 3u )
      {
        if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
        {
LABEL_9:
          v20 = *(_QWORD *)(a1 + 832);
          if ( **(_DWORD **)(v20 + 696) == (_DWORD)a2 )
          {
            sub_1D1F50(a1, 3u, *(_DWORD *)(v20 + 80), 0, 0x3BEA45E214ADDC55LL, (int)a2, 0);
            v20 = *(_QWORD *)(a1 + 832);
          }
          v21 = 0;
LABEL_12:
          v22 = *(_QWORD *)(v20 + 760);
          v42 = *(_QWORD *)(a1 + 120) % a4;
          if ( !v22
            || (v23 = *(int *)(*(_QWORD *)(v20 + 752) + 4 * v22 - 4),
                *(_QWORD *)(v20 + 760) = v22 - 1,
                sub_3EAB70(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), a3, 0x3BEA45E214ADDC55LL, v23, 0),
                v24 = *(_QWORD *)(a1 + 832),
                (v25 = *(_QWORD *)(v24 + 760)) == 0) )
          {
            sub_3E5460(*(double *)a7.m128_u64);
          }
          v26 = *(_DWORD *)(*(_QWORD *)(v24 + 752) + 4 * v25 - 4);
          *(_QWORD *)(v24 + 760) = v25 - 1;
          v27 = a4 - v42;
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 800) + 145LL) != v19 )
          {
            sub_3EAB70(v16, 3u, *(_DWORD *)(*(_QWORD *)(v16 + 832) + 84LL), (int)v42, 0x3BEA45E214ADDC55LL, v26, 1);
            sub_3EAB70(v16, 0xDu, *(_DWORD *)(*(_QWORD *)(v16 + 832) + 84LL), v23, v26, v23, 0);
            v27 = v42 + 1;
          }
          v28 = *(_QWORD *)(v16 + 832);
          v29 = *(_DWORD *)(v28 + 84);
          if ( v27 == a4 )
          {
            v30 = *(int *)(v28 + 64);
            if ( !v21 )
            {
              sub_3EAB70(v16, 1u, v27, v17, v30, v23, v29);
              sub_3E8540(*(_QWORD *)(v16 + 832), v23);
              sub_3E8540(*(_QWORD *)(v16 + 832), v26);
              goto LABEL_21;
            }
            sub_3EAB70(v16, 2u, v27, v30, v23, v17, v29);
            sub_3E8540(*(_QWORD *)(v16 + 832), v23);
            sub_3E8540(*(_QWORD *)(v16 + 832), v26);
          }
          else
          {
            v44 = v27;
            sub_3EAB70(v16, 3u, v29, 1, 0x3BEA45E214ADDC55LL, v26, 1);
            if ( v44 > 0 )
            {
              v33 = v16;
              v34 = 0;
              v35 = v33;
              do
              {
                v36 = v34;
                if ( *(_BYTE *)(*(_QWORD *)(v35 + 800) + 145LL) != v19 )
                  v36 = v42 - v34;
                if ( v19 )
                  v36 = a4 - 1 - v36;
                v37 = *(_QWORD *)(v35 + 832);
                v38 = v17 + v36;
                v39 = *(_DWORD *)(v37 + 84);
                v40 = *(int *)(v37 + 64);
                if ( v21 )
                  sub_3EAB70(v35, 2u, 1, v40, v23, v38, v39);
                else
                  sub_3EAB70(v35, 1u, 1, v38, v40, v23, v39);
                ++v34;
                sub_3EAB70(v35, 0xCu, *(_DWORD *)(*(_QWORD *)(v35 + 832) + 84LL), v23, v26, v23, 0);
              }
              while ( v44 != v34 );
              v16 = v35;
            }
            sub_3E8540(*(_QWORD *)(v16 + 832), v23);
            sub_3E8540(*(_QWORD *)(v16 + 832), v26);
            if ( !v21 )
            {
              v31 = *(_WORD *)(v16 + 48);
              if ( v31 != 124 )
                goto LABEL_22;
              goto LABEL_42;
            }
          }
          if ( v17 == **(_DWORD **)(*(_QWORD *)(v16 + 832) + 728LL) )
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 920LL) + 128LL) |= 2u;
LABEL_21:
          v31 = *(_WORD *)(v16 + 48);
          if ( v31 != 124 )
          {
LABEL_22:
            if ( v31 != 125 )
              return 1;
            v41 = 0;
            if ( *(_BYTE *)(*(_QWORD *)(v16 + 800) + 145LL) )
              v41 = 3;
            if ( v41 != (_DWORD)v42 )
              return 1;
          }
LABEL_42:
          sub_3EE280(v16, a4, v17);
          return 1;
        }
        goto LABEL_56;
      }
      if ( !under_debugger )
        sub_37E160(0xCCB1u, *(double *)a7.m128_u64);
LABEL_60:
      BUG();
    }
    if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
    {
LABEL_44:
      v20 = *(_QWORD *)(a1 + 832);
      v21 = 1;
      goto LABEL_12;
    }
    goto LABEL_56;
  }
LABEL_25:
  sub_3EA750(a1, a7, a8, a9, a10, a11, a12, a13, a14, a2, v15, (char *)(unsigned int)(v15 - 122), a5, a6);
  if ( *(unsigned __int16 *)(a1 + 890) == a4 )
  {
    if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
    {
      if ( v18 != 1 )
        goto LABEL_9;
      goto LABEL_44;
    }
LABEL_56:
    if ( !under_debugger )
      sub_37E160(0xCCAFu, *(double *)a7.m128_u64);
    goto LABEL_60;
  }
  return 0;
}

