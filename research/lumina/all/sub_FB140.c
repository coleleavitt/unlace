__int64 __fastcall sub_FB140(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  char v9; // dl
  _QWORD *v10; // r14
  bool v11; // r10
  __int64 result; // rax
  _BYTE *v13; // rcx
  unsigned __int16 v14; // ax
  char v15; // al
  int *v16; // r13
  unsigned int v17; // eax
  int v18; // ebp
  _QWORD *v19; // r12
  __int64 v20; // rbx
  int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // r14
  int v28; // r12d
  __int64 v29; // rbp
  _QWORD *v30; // rbx
  int v31; // eax
  int v32; // edx
  unsigned __int16 v33; // bx
  int v34; // ebp
  __int16 v35; // dx
  int v36; // esi
  _WORD *v37; // rax
  _WORD *v38; // rax
  _WORD *v39; // rsi
  char v40; // al
  int v41; // r15d
  int v42; // ebx
  int v43; // r13d
  int v44; // eax
  __int64 v45; // r12
  int v46; // eax
  __int16 v47; // bx
  __int64 *v48; // r15
  __int16 v49; // ax
  __int16 v50; // bx
  __int64 **v51; // rax
  __int16 v52; // ax
  bool v53; // dl
  __int16 v54; // ax
  unsigned int v55; // [rsp+0h] [rbp-118h]
  bool v56; // [rsp+0h] [rbp-118h]
  unsigned __int16 v57; // [rsp+8h] [rbp-110h]
  __int64 *v58; // [rsp+8h] [rbp-110h]
  __int64 v59; // [rsp+18h] [rbp-100h]
  char v60; // [rsp+24h] [rbp-F4h]
  unsigned int v61; // [rsp+24h] [rbp-F4h]
  __int64 v62; // [rsp+28h] [rbp-F0h]
  __int64 v64; // [rsp+38h] [rbp-E0h]
  __int64 v65; // [rsp+38h] [rbp-E0h]
  __int64 v66; // [rsp+40h] [rbp-D8h]
  __int64 v67; // [rsp+48h] [rbp-D0h]
  __int16 v68; // [rsp+5Eh] [rbp-BAh] BYREF
  _QWORD v69[14]; // [rsp+60h] [rbp-B8h] BYREF
  _WORD v70[2]; // [rsp+D4h] [rbp-44h] BYREF
  unsigned __int64 v71; // [rsp+D8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v71 = __readfsqword(0x28u);
  v4 = *(_QWORD *)a1;
  v68 = -1;
  v5 = *(_QWORD *)(v4 + 8);
  v67 = v4;
  v6 = *(unsigned __int8 *)(v3 + 16);
  v7 = v5 + 104 * v6 + 8;
  v8 = *(_QWORD *)(v5 + 104 * v6 + 40);
  v9 = *(_BYTE *)(v7 + 61);
  v62 = v8;
  v59 = *(_QWORD *)(a1 + 8);
  if ( (v9 & 2) != 0 )
  {
    v10 = *(_QWORD **)(v7 + 96);
  }
  else
  {
    if ( *(char *)(v8 + 48) >= 0 )
    {
      v10 = v69;
      v70[1] = 0;
      memset(v69, 0, sizeof(v69));
      *(_DWORD *)((char *)&v69[11] + 6) = 65537;
      BYTE2(v69[12]) = 5;
      v69[1] = &v68;
      v69[3] = v8;
      v69[2] = v70;
      v54 = *(_WORD *)(v8 + 60);
      BYTE3(v69[12]) |= 3u;
      WORD2(v69[11]) = v54;
      v9 = *(_BYTE *)(v7 + 61);
      v47 = *(_WORD *)(v62 + 58);
      v70[0] = v47;
      if ( (v9 & 1) == 0 )
        v69[5] = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 16LL);
      v13 = nullptr;
      if ( *(_QWORD *)(a1 + 24) )
      {
LABEL_6:
        v60 = 1;
        while ( 1 )
        {
          if ( v13 && !(unsigned int)sub_F89E0(*(_DWORD *)(v7 + 64), (*(_BYTE *)(v7 + 60) & 0x20) != 0, v59, v13, a3)
            || (*((_BYTE *)v10 + 100) & 1) != 0 )
          {
            result = 0;
            if ( (*(_BYTE *)(v7 + 61) & 2) != 0 )
              return result;
            goto LABEL_48;
          }
          v14 = *(_WORD *)v10[2];
          *(_DWORD *)(v3 + 24) = 0;
          *(_WORD *)(v3 + 28) = 0;
          *(_DWORD *)(v3 + 52) = 0;
          *(_BYTE *)(v3 + 17) = 0;
          *(_WORD *)(v3 + 18) = 0;
          *(_QWORD *)v3 = a2;
          *(_QWORD *)(v3 + 32) = v10;
          v57 = v14;
          *(_WORD *)(v3 + 22) = v14;
          v15 = *((_BYTE *)v10 + 99);
          if ( (v15 & 4) != 0 || (v16 = *(int **)(*(_QWORD *)a1 + 16LL)) == nullptr )
          {
            v22 = 0;
            if ( (v15 & 3) != 3 )
            {
LABEL_36:
              if ( (v15 & 0x20) != 0 )
                goto LABEL_37;
LABEL_23:
              v23 = v10[13] & *(_QWORD *)(v7 + 80);
              *(_DWORD *)(v3 + 48) = v23 == 0 ? 576 : 512;
              if ( v22 )
                goto LABEL_24;
LABEL_38:
              v24 = 0;
              if ( *(char *)(v62 + 48) < 0 || v10[9] || (*(_BYTE *)(v7 + 61) & 2) != 0 )
              {
LABEL_40:
                *(_BYTE *)(v3 + 17) = v24;
                v31 = v57 + 15 * *((__int16 *)v10 + 46) / *(__int16 *)(v62 + 60) + 1;
                *(_WORD *)(v3 + 20) = v57 + 15 * *((__int16 *)v10 + 46) / *(__int16 *)(v62 + 60) + 1;
                if ( v23 )
                {
                  v41 = *(_DWORD *)(v7 + 64);
                  v42 = v57 + 16;
                  if ( *(int *)(v67 + 140) > 0 )
                  {
                    v65 = v7;
                    v43 = 0;
                    while ( 1 )
                    {
                      v45 = *(_QWORD *)(v67 + 152) + 56LL * v43;
                      if ( !sub_CE0B0(*(_QWORD *)v45, v41, (__int64)v10) )
                        break;
                      v46 = *(unsigned __int16 *)(v45 + 16);
                      if ( (__int16)v46 > 0 )
                      {
                        v44 = v42 - 1;
                        v42 -= 20;
                        if ( (*(_BYTE *)(v45 + 20) & 0x82) == 0 )
                          v42 = v44;
                        if ( *(_DWORD *)(v67 + 140) <= ++v43 )
                          break;
                      }
                      else
                      {
                        v42 += v46;
                        if ( *(_DWORD *)(v67 + 140) <= ++v43 )
                          break;
                      }
                    }
                    v7 = v65;
                    LOWORD(v31) = *(_WORD *)(v3 + 20);
                  }
                  *(_WORD *)(v3 + 20) = sub_CB800((__int16)v31, (__int16)v42);
                }
              }
              else
              {
                if ( v23
                  || (*((_BYTE *)v10 + 99) & 4) != 0
                  || *((_WORD *)v10 + 46) >= *(_WORD *)(v62 + 60)
                  || (*(_BYTE *)(v67 + 68) & 4) != 0
                  || !byte_241487
                  || (*(_BYTE *)(**(_QWORD **)v67 + 96LL) & 0x20) != 0 )
                {
                  goto LABEL_43;
                }
                *(_BYTE *)(v3 + 17) = 0;
                *(_WORD *)(v3 + 20) = v57 + 15 * *((__int16 *)v10 + 46) / *(__int16 *)(v62 + 60) + 1;
              }
              v32 = (__int16)v57;
              v33 = v57;
              goto LABEL_42;
            }
LABEL_62:
            *(_DWORD *)(v3 + 48) = 256;
            v40 = 0;
            goto LABEL_63;
          }
          if ( *v16 <= 0 )
          {
LABEL_21:
            if ( (v15 & 3) != 3 )
            {
              v22 = 0;
              if ( (v15 & 0x20) == 0 )
                goto LABEL_23;
LABEL_37:
              v23 = 0;
              *(_DWORD *)(v3 + 48) = 576;
              if ( !v22 )
                goto LABEL_38;
LABEL_24:
              v24 = v60;
              goto LABEL_40;
            }
            goto LABEL_62;
          }
          v17 = *(_DWORD *)(v7 + 64);
          v64 = v3;
          v66 = v7;
          v18 = 0;
          v19 = v10;
          v55 = v17;
          while ( 1 )
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)&v16[6 * v18 + 2];
LABEL_15:
              if ( !v20 )
                goto LABEL_19;
              while ( 1 )
              {
                v21 = *(_DWORD *)(v20 + 4);
                if ( (v21 & 0x41000) == 0 )
                  break;
                if ( (v21 & 0x40000) == 0 )
                {
                  v20 = *(_QWORD *)(v20 + 16);
                  goto LABEL_15;
                }
                v20 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8LL);
                if ( !v20 )
                  goto LABEL_19;
              }
              if ( *(_BYTE *)v20 == 0xA7 && v55 == *(_DWORD *)(v20 + 44) )
                break;
              v25 = v19[10];
              if ( !v25 || !*((_WORD *)v19 + 47) )
                goto LABEL_19;
              v26 = v19;
              v27 = 0;
              v28 = v18;
              v29 = v20;
              v30 = v26;
              do
              {
                if ( *(_WORD *)(v30[1] + 2 * v27) == 0xFFFE
                  && !(unsigned int)sub_F9E50(v29, *(_QWORD *)(v25 + 24LL * (int)v27 + 8), v55, a3) )
                {
                  v3 = v64;
                  v7 = v66;
                  v10 = v30;
                  goto LABEL_34;
                }
                ++v27;
              }
              while ( *((unsigned __int16 *)v30 + 47) > (int)v27 );
              v34 = v28;
              v19 = v30;
              v18 = v34 + 1;
              if ( v18 >= *v16 )
              {
LABEL_20:
                v10 = v19;
                v3 = v64;
                v7 = v66;
                v15 = *((_BYTE *)v10 + 99);
                goto LABEL_21;
              }
            }
            v35 = *(_WORD *)(v20 + 48);
            if ( v35 < 0 )
              goto LABEL_77;
            v36 = *((unsigned __int16 *)v19 + 47);
            if ( (_WORD)v36 )
              break;
LABEL_19:
            if ( ++v18 >= *v16 )
              goto LABEL_20;
          }
          v37 = (_WORD *)v19[1];
          if ( v35 != *v37 )
          {
            v38 = v37 + 1;
            v39 = &v38[v36 - 1];
            while ( v38 != v39 )
            {
              if ( v35 == *v38++ )
                goto LABEL_77;
            }
            goto LABEL_19;
          }
LABEL_77:
          v10 = v19;
          v3 = v64;
          v7 = v66;
LABEL_34:
          v15 = *((_BYTE *)v10 + 99);
          if ( (v15 & 3) != 3 )
          {
            v22 = 1;
            goto LABEL_36;
          }
          *(_DWORD *)(v3 + 48) = 256;
          v40 = v60;
LABEL_63:
          v32 = (__int16)v57;
          *(_BYTE *)(v3 + 17) = v40;
          v33 = v57;
          *(_WORD *)(v3 + 20) = v57 + 16;
LABEL_42:
          sub_CE9D0(v59, v3, v32);
          result = sub_DE680(a1, v3);
          *(_WORD *)(v3 + 22) = v33;
          if ( (_DWORD)result )
            return result;
LABEL_43:
          *(_BYTE *)(a1 + 32) = 0;
          result = sub_FA4E0(a1, v7, (__int64)v10, 0, a3);
          if ( *(_BYTE *)(a1 + 32) == 1 )
            *(_DWORD *)(v62 + 48) |= 0x100u;
          if ( (*(_BYTE *)(v7 + 61) & 2) != 0 )
            return result;
LABEL_48:
          ++v60;
          v10 = (_QWORD *)v10[5];
          if ( (_DWORD)result || !v10 )
            return result;
          v13 = (_BYTE *)v10[9];
        }
      }
      v11 = 1;
      goto LABEL_87;
    }
    v10 = *(_QWORD **)(v8 + 16);
  }
  v11 = v10 != nullptr;
  result = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
LABEL_4:
    if ( !v11 )
      return result;
    v13 = (_BYTE *)v10[9];
    goto LABEL_6;
  }
  v47 = *(_WORD *)(v62 + 58);
LABEL_87:
  if ( (*(_WORD *)(v67 + 68) & 0x1020) != 0
    || *(char *)(**(_QWORD **)v67 + 49LL) >= 0
    || (v9 & 3) != 0
    || *(char *)(v62 + 48) < 0
    || (v9 & 0x28) != 0
    || (*(_BYTE *)(v7 + 60) & 0x10) != 0 )
  {
    goto LABEL_108;
  }
  v48 = *(__int64 **)(v59 + 32);
  v58 = &v48[7 * *(int *)(v59 + 20)];
  v49 = 0;
  if ( v47 > 10 )
    v49 = sub_D5CA0(v47);
  if ( v48 >= v58 )
  {
LABEL_108:
    result = 0;
    goto LABEL_4;
  }
  v50 = v49 + v47;
  v56 = v11;
  v61 = v49;
  while ( 1 )
  {
    if ( (v48[5] & *(_QWORD *)(v3 + 8)) != 0
      || !sub_D0CF0(v48, *(_QWORD *)(v7 + 32), *(_BYTE *)(v7 + 60), *(_DWORD *)(v7 + 64), 0) )
    {
      v53 = 1;
      result = 0;
    }
    else
    {
      v51 = *(__int64 ***)(v3 + 64);
      *(_QWORD *)(v3 + 32) = 0;
      *(_WORD *)(v3 + 24) = 1;
      *(_DWORD *)(v3 + 52) = 1;
      *v51 = v48;
      *(_WORD *)(v3 + 18) = v50;
      if ( *(_BYTE *)(v62 + 63) == 2 || (*(_BYTE *)(v62 + 49) & 0x40) != 0 )
        *(_WORD *)(v3 + 18) = v50 - 10;
      else
        *(_WORD *)(v3 + 18) = v50 + 28;
      if ( *(__int16 *)(v3 + 18) < 0 )
        *(_WORD *)(v3 + 18) = 0;
      *(_WORD *)(v3 + 22) = 43;
      v52 = sub_CB800(v61, 0x2Bu);
      *(_DWORD *)(v3 + 48) = 0x4000;
      *(_WORD *)(v3 + 20) = v52;
      *(_QWORD *)v3 = v48[5] | a2;
      result = sub_DE680(a1, v3);
      v53 = (_DWORD)result == 0;
    }
    v48 += 7;
    if ( v58 <= v48 )
      break;
    if ( !v53 )
      return result;
  }
  v11 = v56;
  if ( v53 )
    goto LABEL_4;
  return result;
}
