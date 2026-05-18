__int64 *__fastcall sub_F6F60(__int64 *a1, const char *a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // rcx
  bool v4; // cc
  int v5; // eax
  char v6; // al
  char *v7; // rbp
  signed int v8; // edx
  unsigned __int8 *v10; // r15
  signed int v11; // ebp
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int8 *v15; // rbx
  int v16; // eax
  int v17; // edx
  __int64 v18; // r8
  double *v19; // r8
  __int16 v20; // ax
  double *v21; // rbp
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // r15
  __int64 v29; // rbx
  int v30; // edx
  int v31; // [rsp+4h] [rbp-C4h]
  __int64 v32; // [rsp+8h] [rbp-C0h]
  int v33; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v34; // [rsp+10h] [rbp-B8h]
  int v35; // [rsp+28h] [rbp-A0h] BYREF
  int v36; // [rsp+2Ch] [rbp-9Ch] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-98h] BYREF
  int v38; // [rsp+40h] [rbp-88h]
  int v39; // [rsp+44h] [rbp-84h]
  int v40; // [rsp+48h] [rbp-80h]
  __int16 v41; // [rsp+4Ch] [rbp-7Ch]
  __int128 v42; // [rsp+50h] [rbp-78h] BYREF
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __int128 v45; // [rsp+70h] [rbp-58h]
  __int64 v46; // [rsp+80h] [rbp-48h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v2 = (unsigned __int8 *)a2;
  v3 = *a1;
  v47 = __readfsqword(0x28u);
  v35 = 0;
  v37[1] = 0;
  v4 = *(_DWORD *)(v3 + 220) <= 1;
  v5 = *(_DWORD *)(v3 + 136);
  v32 = v3;
  v37[0] = 0;
  v38 = 0;
  v40 = 0;
  v39 = v5;
  v41 = 0;
  if ( v4 )
  {
    if ( *((_WORD *)a1 + 16) )
    {
      v31 = 1;
LABEL_16:
      if ( *v2 )
      {
        v10 = v2;
        v11 = 0;
        do
        {
          v12 = sub_D1270(v10, &v36);
          if ( v36 == 156 )
          {
            v33 = v12;
            sub_DFD90((__int64)v37, v2, v11);
            v14 = v33;
            v15 = &v2[v11];
            if ( !v33 )
              goto LABEL_12;
            if ( *v15 == 63 )
            {
              if ( v33 > 1 )
              {
                sub_C6480(v15 + 1, &v35);
                v14 = v33;
                v17 = v35 + 1;
                v18 = 56LL * v35 - 56;
              }
              else
              {
                v35 = v31;
                v17 = v31 + 1;
                v18 = 56LL * v31 - 56;
              }
            }
            else
            {
              if ( a1 && v15 )
              {
                v16 = sub_C8320(a1[22], (const char *)v15, v33);
                v14 = v33;
                v17 = v16 + 1;
                v18 = 56LL * v16 - 56;
              }
              else
              {
                v18 = -56;
                v17 = 1;
                v16 = 0;
              }
              v35 = v16;
            }
            v2 = &v15[v14];
            if ( v31 >= v17 )
              v17 = v31;
            v19 = (double *)(a1[16] + v18);
            v31 = v17;
            v20 = *((_WORD *)v19 + 10);
            v21 = v19;
            if ( (v20 & 1) != 0 )
            {
              sub_DFD90((__int64)v37, "NULL", 4);
            }
            else if ( (v20 & 0x24) != 0 )
            {
              sub_DBBA0((__int64)v37, "%lld", *(_QWORD *)v19);
            }
            else if ( (v20 & 8) != 0 )
            {
              sub_DBBA0((__int64)v37, "%!.15g", *v19);
            }
            else if ( (v20 & 2) != 0 )
            {
              v22 = *(_BYTE *)(v32 + 100);
              if ( v22 == 1 )
              {
                sub_DBBA0((__int64)v37, "'%.*q'", *((unsigned int *)v19 + 4), *((_QWORD *)v19 + 1));
              }
              else
              {
                v46 = 0;
                v43 = 0;
                v44 = v32;
                v42 = 0;
                v45 = 0;
                sub_F11D0((__int64)&v42, *((_QWORD **)v19 + 1), *((int *)v19 + 4), v22, nullptr, v13);
                if ( (v43 & 0x200000000LL) != 0 )
                {
                  if ( BYTE6(v43) != 1 && (unsigned int)sub_E03B0((__int64)&v42, 1) == 7 )
                  {
                    LOBYTE(v41) = 7;
                    v38 = 0;
                  }
                }
                else
                {
                  BYTE6(v43) = 1;
                }
                sub_DBBA0((__int64)v37, "'%.*q'", (unsigned int)v43, *((_QWORD *)&v42 + 1));
                if ( (v43 & 0x900000000000LL) != 0 || (_DWORD)v45 )
                  sub_C9690((__int64)&v42, (__int64)"'%.*q'", v23, v24, v25, v26);
              }
            }
            else if ( (v20 & 0x400) != 0 )
            {
              sub_DBBA0((__int64)v37, "zeroblob(%d)", *(_DWORD *)v19);
            }
            else
            {
              sub_DFD90((__int64)v37, "x'", 2);
              v27 = *((_DWORD *)v21 + 4);
              if ( v27 > 0 )
              {
                v34 = v2;
                v28 = (unsigned int)(v27 - 1) + 1LL;
                v29 = 0;
                do
                {
                  v30 = *(unsigned __int8 *)(*((_QWORD *)v21 + 1) + v29++);
                  sub_DBBA0((__int64)v37, "%02x", v30);
                }
                while ( v28 != v29 );
                v2 = v34;
              }
              sub_DFD90((__int64)v37, "'", 1);
            }
            goto LABEL_16;
          }
          v11 += v12;
          v10 += v12;
        }
        while ( *v10 );
        sub_DFD90((__int64)v37, v2, v11);
        if ( !(_BYTE)v41 )
          return sub_DC130((__int64)v37);
        goto LABEL_13;
      }
    }
    else
    {
      v8 = 0;
      if ( a2 )
        v8 = strlen(a2) & 0x3FFFFFFF;
      sub_DFD90((__int64)v37, a2, v8);
    }
  }
  else
  {
    v6 = *a2;
    if ( !*a2 )
      return sub_DC130((__int64)v37);
    while ( 1 )
    {
      v7 = (char *)v2;
      do
      {
        ++v7;
        if ( v6 == 10 )
          break;
        v6 = *v7;
      }
      while ( *v7 );
      sub_DFD90((__int64)v37, "-- ", 3);
      sub_DFD90((__int64)v37, v2, (_DWORD)v7 - (_DWORD)v2);
      v6 = *v7;
      if ( !*v7 )
        break;
      v2 = (unsigned __int8 *)v7;
    }
  }
LABEL_12:
  if ( (_BYTE)v41 )
LABEL_13:
    sub_C92E0((__int64)v37);
  return sub_DC130((__int64)v37);
}
