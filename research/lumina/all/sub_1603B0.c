unsigned __int64 __fastcall sub_1603B0(__int64 a1, double a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v9; // r15
  unsigned __int8 *v10; // rbp
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int64 v20; // r13
  unsigned __int8 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // al
  unsigned __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // eax
  int v34; // r11d
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // [rsp-8h] [rbp-240h]
  __int64 v40; // [rsp+0h] [rbp-238h]
  int v41; // [rsp+0h] [rbp-238h]
  int v42; // [rsp+8h] [rbp-230h]
  _BYTE *v43; // [rsp+10h] [rbp-228h]
  __int64 v44; // [rsp+18h] [rbp-220h]
  __int64 *v45; // [rsp+20h] [rbp-218h] BYREF
  __int128 v46; // [rsp+28h] [rbp-210h]
  __int128 v47; // [rsp+38h] [rbp-200h]
  __int128 v48; // [rsp+48h] [rbp-1F0h]
  __int64 v49; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-1D0h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-1C0h]
  int v52; // [rsp+90h] [rbp-1A8h]
  __int64 v53; // [rsp+1B0h] [rbp-88h]
  __int64 v54; // [rsp+1C0h] [rbp-78h]
  unsigned __int64 v55; // [rsp+1F8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v10 = (unsigned __int8 *)sub_D9DB0(*(_QWORD *)a4, 1u, a2, a4, a5, a6, a7);
  v40 = sub_D9DB0(*(_QWORD *)(a4 + 8), 1u, a2, v11, v12, v13, v14);
  v42 = sub_CD0F0(*(char ***)(a4 + 32));
  v44 = *(_QWORD *)(v9 + 48);
  v43 = (_BYTE *)sub_D9DB0(*(_QWORD *)(a4 + 40), 1u, a2, v15, v16, v17, v18);
  v19 = sub_CD0F0(*(char ***)(a4 + 48));
  v20 = *(_QWORD *)(v9 + 496);
  *(_QWORD *)(v9 + 496) = 0;
  if ( v10 )
  {
    v21 = (unsigned __int8 *)v40;
    if ( v40 )
    {
      v22 = *(_QWORD *)(v9 + 48);
      if ( v19 )
        *(_QWORD *)(v9 + 48) = v22 & 0xFFFFFFFF9FFFFFFFLL;
      v23 = (__int64)v10;
      v41 = v22;
      v24 = sub_15FC20((__int64)&v49, v10, v9, v21, v42);
      v28 = v41 & 0x60000000;
      *(_QWORD *)(v9 + 48) |= v28;
      if ( v24 )
        goto LABEL_6;
      if ( (v44 & 0x4000000) != 0 )
      {
        v31 = v54;
        if ( v54 )
        {
LABEL_18:
          v32 = *(_QWORD *)(v31 + 48);
          if ( v32 )
            sub_CFB20(v9, v32);
          v23 = (__int64)v10;
          v33 = sub_CA320(v9, v10);
          if ( v33 == v34 )
          {
            v35 = *(_QWORD *)a1;
            if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
            {
              v23 = 1;
              sub_C9430(v35, 1, v25, v26, v27, v28);
            }
            else
            {
              v26 = 4;
              *(_QWORD *)v35 = 1;
              *(_WORD *)(v35 + 20) = 4;
            }
          }
        }
      }
      else if ( v53 && *(_BYTE *)(v53 + 63) == 2 )
      {
        a2 = 0.0;
        v45 = &v49;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v23 = *(_QWORD *)(v53 + 64);
        sub_CFDC0((__int64)&v49, v23, (__int64)&v45);
        if ( v52 )
        {
          v23 = v51;
          LOBYTE(v25) = v43 != nullptr;
          v29 = v43 != nullptr && v51 != 0;
          goto LABEL_7;
        }
      }
      else if ( v54 )
      {
        if ( (unsigned int)sub_145C50((__int64)&v49) )
        {
LABEL_6:
          v29 = v43 != nullptr;
LABEL_7:
          if ( v29 && (*(_QWORD *)(v9 + 48) & 0x10000001LL) != 1 )
          {
            sub_F6E80(
              (__int64 *)a1,
              (_DWORD *)(a1 + 36),
              v43,
              *(_QWORD *)(a4 + 16),
              *(_QWORD *)(a4 + 24),
              &v49,
              a2,
              &v50);
            sub_11EA20((__int64)&v49, a1 + 36, v39, v36, v37, v38);
            goto LABEL_10;
          }
          goto LABEL_9;
        }
        v31 = v54;
        goto LABEL_18;
      }
LABEL_9:
      sub_11EA20((__int64)&v49, v23, v25, v26, v27, v28);
    }
  }
LABEL_10:
  result = __readfsqword(0x28u) ^ v55;
  *(_QWORD *)(v9 + 496) = v20;
  return result;
}
