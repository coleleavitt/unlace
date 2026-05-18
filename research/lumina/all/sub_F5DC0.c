__int64 __fastcall sub_F5DC0(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // ebp
  int v18; // r8d
  __int64 v19; // r9
  _UNKNOWN **v20; // r15
  _DWORD *v21; // r14
  int v22; // r11d
  __int64 v23; // rbx
  size_t v24; // rdx
  unsigned int v25; // r12d
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // edi
  __int64 v29; // rcx
  unsigned int v30; // eax
  bool v31; // cc
  __int64 v32; // rbx
  unsigned int v33; // r12d
  int v34; // ecx
  __int64 v35; // rdi
  _BYTE *v36; // rax
  _QWORD *s1; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+10h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  _BYTE *v41; // [rsp+30h] [rbp-48h]
  int v42; // [rsp+38h] [rbp-40h]
  unsigned int v43; // [rsp+3Ch] [rbp-3Ch]

  v42 = a2;
  result = *(_WORD *)(*a3 + 20) & 0x3F;
  if ( byte_1BAD40[result] != 5 )
  {
    result = sub_D9DB0(*a3, 1u, a7, (__int64)byte_1BAD40, a4, a5, a6);
    s1 = (_QWORD *)result;
    if ( result )
    {
      v14 = (_BYTE *)(&dword_0 + 1);
      v17 = sub_D9CE0(*a3, 1u, a7, v10, v11, v12, v13);
      if ( a2 == 1 )
      {
        v20 = &off_239F28;
        v21 = &unk_1BA9C0;
        v41 = nullptr;
        goto LABEL_5;
      }
      result = sub_D9DB0(a3[1], 1u, a7, v15, v16, v18, v19);
      v41 = (_BYTE *)result;
      if ( result )
      {
        LOBYTE(v27) = *(_BYTE *)result;
        v22 = v17;
        if ( !*(_BYTE *)result )
          return sub_F48B0(a1, s1, v22, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v19);
        v28 = 0;
        while ( 1 )
        {
          v29 = result + 1;
          v30 = *(unsigned __int8 *)(result + 1);
          v31 = (unsigned __int8)v27 <= 0xBFu;
          v27 = v30;
          if ( !v31 )
          {
            if ( (v30 & 0xC0) == 0x80 )
            {
              result = v29;
              do
              {
                v27 = *(unsigned __int8 *)++result;
                v29 = *(_BYTE *)result & 0xC0;
              }
              while ( (*(_BYTE *)result & 0xC0) == 0x80 );
              goto LABEL_21;
            }
            v27 = v30;
          }
          result = v29;
LABEL_21:
          ++v28;
          if ( !(_BYTE)v27 )
          {
            if ( v28 <= 0 )
              return sub_F48B0(a1, s1, v22, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v19);
            result = sub_F5B20(a1, 12LL * v28, v27, v29, v26, v19);
            v20 = (_UNKNOWN **)result;
            if ( !result )
              return result;
            v14 = v41;
            v21 = (_DWORD *)(result + 8LL * v28);
            v22 = v17;
            if ( !*v41 )
              return sub_F48B0(a1, s1, v22, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v19);
            v34 = 0;
            while ( 1 )
            {
              v35 = v34;
              v36 = v14 + 1;
              v20[v34] = v14;
              if ( *v14 > 0xBFu && (v14[1] & 0xC0) == 0x80 )
              {
                do
                  ++v36;
                while ( (*v36 & 0xC0) == 0x80 );
              }
              ++v34;
              v21[v35] = (_DWORD)v36 - (_DWORD)v14;
              if ( !*v36 )
                break;
              v14 = v36;
            }
            v42 = v34;
            if ( v34 <= 0 )
              return sub_F48B0(a1, s1, v22, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v19);
LABEL_5:
            v40 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
            v22 = v40 & 1;
            if ( (v40 & 1) != 0 )
            {
              if ( v17 )
              {
                v43 = v42 - 1;
                while ( 2 )
                {
                  v32 = 0;
                  while ( 1 )
                  {
                    v33 = v21[v32];
                    if ( v33 <= v17 )
                    {
                      v14 = v20[v32];
                      if ( !memcmp(s1, v14, v33) )
                        break;
                    }
                    if ( (unsigned int)(v42 - 1) + 1LL == ++v32 )
                      goto LABEL_33;
                  }
                  if ( v42 <= (int)v32 )
                  {
LABEL_33:
                    if ( (v40 & 2) != 0 )
                      goto LABEL_9;
                    goto LABEL_34;
                  }
                  s1 = (_QWORD *)((char *)s1 + v33);
                  v17 -= v33;
                  if ( v17 )
                    continue;
                  break;
                }
              }
              v22 = 0;
            }
            else if ( (v40 & 2) != 0 )
            {
              if ( v17 )
              {
                v43 = v42 - 1;
                do
                {
LABEL_9:
                  v23 = 0;
                  while ( 1 )
                  {
                    v24 = (unsigned int)v21[v23];
                    if ( (unsigned int)v24 <= v17 )
                    {
                      v14 = v20[v23];
                      v25 = v17 - v24;
                      if ( !memcmp((char *)s1 + v17 - (unsigned int)v24, v14, v24) )
                        break;
                    }
                    if ( v43 + 1LL == ++v23 )
                      goto LABEL_13;
                  }
                  if ( v42 <= (int)v23 )
                  {
LABEL_13:
                    v22 = v17;
                    goto LABEL_35;
                  }
                  v17 = v25;
                }
                while ( v25 );
                v22 = 0;
              }
            }
            else
            {
LABEL_34:
              v22 = v17;
            }
LABEL_35:
            if ( v41 )
            {
              v38 = v22;
              sub_C91C0((__int64)v20, (__int64)v14);
              v22 = v38;
            }
            return sub_F48B0(a1, s1, v22, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v19);
          }
        }
      }
    }
  }
  return result;
}
