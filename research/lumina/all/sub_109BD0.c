unsigned __int64 __fastcall sub_109BD0(__int64 *a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v10; // r12
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r13
  __int64 *v16; // rbx
  int v17; // r12d
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  char *v22; // rsi
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  char *v31; // rax
  const char *v32; // rbx
  unsigned __int8 v33; // al
  unsigned int v34; // eax
  char *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  _BYTE *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // [rsp+8h] [rbp-D0h]
  __int64 *v49; // [rsp+10h] [rbp-C8h] BYREF
  char *v50; // [rsp+18h] [rbp-C0h]
  __int64 v51; // [rsp+20h] [rbp-B8h]
  __int64 v52; // [rsp+28h] [rbp-B0h]
  __int16 v53; // [rsp+30h] [rbp-A8h]
  _BYTE v54[102]; // [rsp+32h] [rbp-A6h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( a2 > 1 )
  {
    v10 = *(_QWORD *)(a1[1] + 8);
    v15 = sub_105410((__int64)a1, a3, (__int64)a1, a4, a5, a6, a7);
    if ( v15 )
    {
      if ( a2 == 2 )
      {
        v31 = (char *)sub_D9DB0(a3[1], 1u, a7, v11, v12, v13, v14);
        v32 = v31;
        if ( v31 )
        {
          if ( (v10 & 3) != 0 )
          {
            if ( *v31 == 36 )
            {
              v40 = sub_109A50(v15, v31, nullptr, (__int64)a1);
            }
            else
            {
              v49 = a1;
              v51 = 100;
              v52 = 0;
              v53 = 1;
              v50 = v54;
              v33 = *v31;
              if ( (byte_1BEF00[v33] & 4) != 0 )
              {
                sub_102C40(&v49, "$[", 2u);
                v47 = strlen(v32);
                if ( v47 )
                  sub_102C40(&v49, v32, v47);
                v35 = "]";
                sub_102C40(&v49, "]", 2u);
              }
              else
              {
                sub_102C40(&v49, "$.", (v33 != 91) + 1);
                v34 = strlen(v32);
                if ( v34 )
                  sub_102C40(&v49, v32, v34);
                v35 = nullptr;
                sub_102750(&v49, 0);
              }
              v40 = 0;
              if ( !HIBYTE(v53) )
              {
                v35 = v50;
                v40 = sub_109A50(v15, v50, nullptr, (__int64)a1);
              }
              if ( !(_BYTE)v53 )
                sub_C91C0((__int64)v50, (__int64)v35);
              v51 = 100;
              v52 = 0;
              v50 = v54;
              LOBYTE(v53) = 1;
            }
            if ( v40 )
            {
              if ( (v10 & 1) != 0 )
              {
                sub_103590(v40, a1, 0, v37, v38, v39, a7);
              }
              else
              {
                sub_103630(v40, (__int64)a1, v36, v37, v38, v39, a7);
                v46 = *a1;
                *(_BYTE *)(v46 + 23) = 0;
                *(_WORD *)(v46 + 20) |= 0x800u;
              }
            }
          }
          else
          {
            v41 = sub_109A50(v15, v31, nullptr, (__int64)a1);
            if ( !*(_BYTE *)(v15 + 33) && v41 )
              sub_103630(v41, (__int64)a1, v42, v43, v44, v45, a7);
          }
        }
      }
      else
      {
        v49 = a1;
        v51 = 100;
        v52 = 0;
        v16 = a3 + 1;
        v17 = 1;
        v50 = v54;
        v53 = 1;
        sub_102750(&v49, 91);
        while ( 1 )
        {
          v22 = (char *)sub_D9DB0(*v16, 1u, a7, v18, v19, v20, v21);
          v48 = sub_109A50(v15, v22, nullptr, (__int64)a1);
          if ( *(_BYTE *)(v15 + 33) )
            break;
          sub_1029E0(&v49);
          if ( v48 )
          {
            ++v17;
            ++v16;
            sub_103310(v48, &v49, 0, v23, v24, v25, a7);
            if ( a2 == v17 )
              goto LABEL_10;
          }
          else
          {
            ++v17;
            ++v16;
            sub_102C40(&v49, "null", 4u);
            if ( a2 == v17 )
              goto LABEL_10;
          }
        }
        if ( a2 != v17 )
          goto LABEL_29;
LABEL_10:
        v22 = (_BYTE *)(&qword_58 + 5);
        sub_102750(&v49, 93);
        if ( !HIBYTE(v53) )
          sub_F4BA0((__int64)&v49, 93, v26, v27, v28, v29);
        v30 = *a1;
        *(_BYTE *)(v30 + 23) = 74;
        *(_WORD *)(v30 + 20) |= 0x800u;
LABEL_29:
        if ( !(_BYTE)v53 )
          sub_C91C0((__int64)v50, (__int64)v22);
      }
    }
  }
  return __readfsqword(0x28u) ^ v55;
}
