__int64 __fastcall sub_3A1E50(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  int *v8; // rsi
  _DWORD *v9; // rcx
  int v10; // esi
  _DWORD *v11; // rax
  char v12; // r12
  __int64 v13; // rbp
  _BYTE *v14; // rax
  __int64 v15; // r13
  __int64 func; // r12
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // r14
  __int64 *v22; // rbx
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 i; // rbp
  _QWORD *v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 j; // rbp
  _QWORD *v31; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rsi
  int v37; // edi
  __int64 v38; // [rsp+18h] [rbp-90h] BYREF
  __int64 v39; // [rsp+20h] [rbp-88h] BYREF
  __int64 v40; // [rsp+28h] [rbp-80h]
  __int128 v41; // [rsp+30h] [rbp-78h]
  __int64 v42[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+50h] [rbp-58h]
  __int128 v44; // [rsp+58h] [rbp-50h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( a2 == 20 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x400u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x1000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x800u;
    return 0;
  }
  if ( a2 == 21 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x400u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x1000u;
    v33 = *(_QWORD *)(a1 + 16);
    v34 = *(_DWORD *)(v33 + 1416);
    if ( (v34 & 0x800) != 0 )
    {
      BYTE1(v34) &= ~8u;
      *(_DWORD *)(v33 + 1416) = v34;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, a5, a6);
    }
    return 0;
  }
  if ( a2 != 19 )
    return 0;
  v7 = *a3;
  if ( *a3 > 0x2F )
  {
    v8 = *((int **)a3 + 1);
    v9 = v8 + 2;
    *((_QWORD *)a3 + 1) = v8 + 2;
    v10 = *v8;
    v11 = v9;
    if ( !v10 )
    {
      v12 = 1;
      goto LABEL_9;
    }
    if ( v10 != 1 )
      return 0;
    v12 = 0;
LABEL_8:
    v9 = v11;
LABEL_9:
    *((_QWORD *)a3 + 1) = v9 + 2;
    goto LABEL_10;
  }
  v35 = *((_QWORD *)a3 + 2);
  v36 = v7 + 8;
  *a3 = v36;
  v37 = *(_DWORD *)(v35 + v7);
  if ( v37 )
  {
    if ( v37 != 1 )
      return 0;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned int)v36 > 0x2F )
  {
    v11 = *((_DWORD **)a3 + 1);
    goto LABEL_8;
  }
  v9 = (_DWORD *)(v36 + v35);
  *a3 = v7 + 16;
LABEL_10:
  v13 = *(_QWORD *)v9;
  if ( *(_DWORD *)(*(_QWORD *)v9 + 44LL) == 3 && (*(_BYTE *)(v13 + 76) & 2) != 0 )
  {
    v14 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                     1105,
                     *(unsigned int *)(v13 + 40),
                     &callui,
                     v9,
                     a5,
                     a6);
    if ( v14 )
    {
      if ( *v14 == 36 && (unsigned int)qsscanf() == 1 )
      {
        v15 = v42[0];
        if ( v42[0] != -1 )
        {
          if ( !v12 )
          {
            sub_2B1930(*(_QWORD *)(a1 + 16), v42[0], 0);
            netnode_supdel();
            return 0;
          }
          func = get_func();
          if ( func )
          {
            v17 = *(_QWORD *)(a1 + 16);
            v18 = *(_DWORD *)(v17 + 1416);
            if ( (v18 & 0x1000) == 0 )
            {
              if ( (v18 & 0x400) != 0 && (v18 & 0x800) == 0 )
              {
                BYTE1(v18) |= 8u;
                *(_DWORD *)(v17 + 1416) = v18;
                sub_133060((__int64)"Refreshing decompiler-level breakpoints...", "$%a");
                v17 = *(_QWORD *)(a1 + 16);
              }
              v39 = func;
              v42[0] = 0;
              v42[1] = -1;
              v43 = 0;
              v40 = 0;
              v44 = 0;
              v41 = 0;
              sub_148BC0(&v38, *(_QWORD *)(v17 + 112), &v39, v42, 1);
              if ( v40 )
              {
                *(_QWORD *)&v41 = 0;
                qfree();
              }
              if ( v38 )
              {
                v20 = (__int64 *)sub_3877C0(v38, (unsigned int)(*(_DWORD *)(v13 + 32) - 1), v19);
                v21 = -1;
                if ( (unsigned __int64)v20 > 1 )
                  v21 = *v20;
                sub_2B1930(*(_QWORD *)(a1 + 16), v15, 1);
                v39 = v21 - v15;
                netnode_supset();
              }
              else
              {
                if ( LODWORD(v42[0]) == -18 )
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x1000u;
LABEL_47:
                  if ( v43 )
                  {
                    *(_QWORD *)&v44 = 0;
                    qfree();
                  }
                  return 0;
                }
                sub_2B05F0((__int64)"%a: failed to decompile previously decompilable function", 0.0);
              }
              v22 = (__int64 *)v38;
              if ( v38 )
              {
                if ( (*(_DWORD *)(v38 + 104))-- == 1 )
                {
                  sub_2540F0(v22);
                  if ( v22[23] )
                  {
                    v24 = v22[24];
                    if ( v24 )
                    {
                      v25 = v22[23];
                      for ( i = 0; i != v24; ++i )
                      {
                        v27 = (_QWORD *)(v25 + 24 * i);
                        if ( *v27 )
                        {
                          v27[1] = 0;
                          qfree();
                          v25 = v22[23];
                        }
                      }
                    }
                    v22[24] = 0;
                    qfree();
                  }
                  if ( v22[20] )
                  {
                    v22[21] = 0;
                    qfree();
                  }
                  if ( v22[16] )
                  {
                    v28 = v22[17];
                    if ( v28 )
                    {
                      v29 = v22[16];
                      for ( j = 0; j != v28; ++j )
                      {
                        v31 = (_QWORD *)(v29 + 32 * j);
                        if ( *v31 )
                        {
                          v31[1] = 0;
                          qfree();
                          v29 = v22[16];
                        }
                      }
                    }
                    v22[17] = 0;
                    qfree();
                  }
                  sub_2507D0((__int64)(v22 + 2));
                  j__qfree();
                }
              }
              goto LABEL_47;
            }
          }
        }
      }
    }
  }
  return 0;
}

