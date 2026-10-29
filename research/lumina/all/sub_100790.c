void __fastcall sub_100790(__int64 a1, double a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // ebx
  int v8; // r13d
  __int64 v11; // rsi
  int v12; // ebp
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const __m128i *v22; // rdi
  _BYTE *v23; // rbx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  _BYTE *v29; // r10
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  unsigned int v45; // eax
  char v46; // r11
  int v47; // r15d
  int v48; // eax
  __int64 v49; // rdx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rax
  unsigned int s2; // [rsp+0h] [rbp-58h]
  _BYTE *s2a; // [rsp+0h] [rbp-58h]
  _BYTE *s2b; // [rsp+0h] [rbp-58h]
  unsigned int v57; // [rsp+Ch] [rbp-4Ch]
  char v58; // [rsp+13h] [rbp-45h]
  unsigned int v59; // [rsp+14h] [rbp-44h]
  size_t n; // [rsp+18h] [rbp-40h]

  v7 = byte_1BAD40[*(_WORD *)(*a4 + 20) & 0x3F];
  v8 = byte_1BAD40[*(_WORD *)(a4[1] + 20) & 0x3F];
  if ( v7 != 5 && v8 != 5 )
  {
    v11 = 1;
    v12 = sub_D9CE0(*a4, 1u, a2, (__int64)a4, (int)byte_1BAD40, *a4, a7);
    v17 = sub_D9CE0(a4[1], 1u, a2, v13, v14, v15, v16);
    if ( v17 <= 0 )
    {
      v11 = 1;
      v30 = 0;
      v31 = 0;
LABEL_16:
      v36 = *(_QWORD *)a1;
      if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
      {
        sub_C9430(v36, v11, v18, v19, v20, v21);
      }
      else
      {
        *(_QWORD *)v36 = v11;
        *(_WORD *)(v36 + 20) = 4;
      }
      goto LABEL_13;
    }
    v22 = (const __m128i *)*a4;
    s2 = v17;
    if ( v7 == 4 && v8 == 4 )
    {
      v23 = (_BYTE *)sub_EDD90((__int64)v22, a2, 1, v18, v19, v20, v21);
      v53 = sub_EDD90(a4[1], a2, 1, v49, v50, v51, v52);
      v19 = 0;
      v29 = (_BYTE *)v53;
      v21 = s2;
    }
    else
    {
      if ( v7 == 4 || v8 == 4 )
      {
        v11 = 1;
        v31 = sub_1004E0(v22, 1);
        v23 = (_BYTE *)sub_D9DB0(v31, 1u, a2, v37, v38, v39, v40);
        if ( v23 )
        {
          v12 = sub_D9CE0(v31, 1u, a2, v18, v19, v20, v21);
          v11 = 1;
          v30 = sub_1004E0((const __m128i *)a4[1], 1);
          s2a = (_BYTE *)sub_D9DB0(v30, 1u, a2, v41, v42, v43, v44);
          if ( s2a )
          {
            v45 = sub_D9CE0(v30, 1u, a2, v18, v19, v20, v21);
            v29 = s2a;
            v21 = v45;
            v19 = 1;
LABEL_21:
            v46 = *v29;
            v47 = 1;
            n = (int)v21;
            if ( (int)v21 > v12 )
            {
LABEL_27:
              v11 = 0;
            }
            else
            {
              while ( 1 )
              {
                if ( *v23 == v46 )
                {
                  v59 = v21;
                  v58 = v46;
                  v57 = v19;
                  s2b = v29;
                  v48 = memcmp(v23, v29, n);
                  v29 = s2b;
                  v19 = v57;
                  v46 = v58;
                  v21 = v59;
                  if ( !v48 )
                    break;
                }
                ++v47;
                do
                {
                  --v12;
                  ++v23;
                }
                while ( (_DWORD)v19 && (*v23 & 0xC0) == 0x80 );
                if ( v12 < (int)v21 )
                  goto LABEL_27;
              }
              v11 = v47;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v30 = 0;
        }
LABEL_12:
        sub_E1560(a1, 1, v18, v19, v20, v21);
LABEL_13:
        sub_C9940(v31, v11, v18, v19, v20, v21);
        sub_C9940(v30, v11, v32, v33, v34, v35);
        return;
      }
      v11 = 1;
      v23 = (_BYTE *)sub_D9DB0((__int64)v22, 1u, a2, v18, v19, v20, v21);
      v28 = sub_D9DB0(a4[1], 1u, a2, v24, v25, v26, v27);
      v21 = s2;
      v29 = (_BYTE *)v28;
      v19 = 1;
    }
    if ( v29 )
    {
      if ( v12 )
      {
        v30 = 0;
        v31 = 0;
        if ( !v23 )
          goto LABEL_12;
      }
      v30 = 0;
      v31 = 0;
      goto LABEL_21;
    }
    v30 = 0;
    v31 = 0;
    goto LABEL_12;
  }
}
