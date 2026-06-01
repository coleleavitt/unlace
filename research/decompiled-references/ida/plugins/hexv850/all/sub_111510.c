__int64 __fastcall sub_111510(unsigned __int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  int v12; // r10d
  unsigned __int128 v13; // rax
  unsigned __int128 v14; // kr00_16
  int v15; // edx
  int v16; // eax
  __int128 v19; // kr10_16
  unsigned __int128 v20; // rax
  bool v21; // si
  int v22; // esi
  int v23; // r11d
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r13
  char v26; // cl
  unsigned __int128 v27; // rax
  unsigned __int128 v28; // rax
  __int128 v29; // [rsp+0h] [rbp-C8h]
  unsigned __int128 v31; // [rsp+30h] [rbp-98h]
  __int64 v32; // [rsp+40h] [rbp-88h]
  bool v33; // [rsp+40h] [rbp-88h]
  unsigned __int128 v34; // [rsp+50h] [rbp-78h]
  unsigned __int64 v35; // [rsp+60h] [rbp-68h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  __int64 v37; // [rsp+68h] [rbp-60h]
  __int64 v38; // [rsp+70h] [rbp-58h]
  __int64 v39; // [rsp+78h] [rbp-50h]

  *(_QWORD *)&v29 = a4;
  *((_QWORD *)&v29 + 1) = a5;
  v8 = log2ceil();
  v9 = a4;
  v10 = 0;
  v11 = v8;
  v12 = v8 + a3 - a2;
  if ( (unsigned __int64)(v8 + a3) > 0x7F )
  {
    v14 = 0u;
    v19 = 0u;
    if ( (unsigned __int64)v12 > 0x7F )
      goto LABEL_3;
    goto LABEL_6;
  }
  v35 = v12;
  *(_QWORD *)&v13 = __udivti3();
  v9 = a4;
  v10 = 0;
  v14 = v13;
  if ( v35 <= 0x7F )
  {
    v19 = v13 >> 1;
LABEL_6:
    v32 = v9;
    *(_QWORD *)&v20 = __udivti3();
    v9 = v32;
    v10 = 0;
    v21 = v19 < v20 >> 1;
    v14 = v20 >> 1;
    if ( !v21 || v11 <= 0 )
    {
      v14 = v20;
      goto LABEL_3;
    }
    v33 = v21 && v11 > 0;
    v22 = v11;
    v23 = a3;
    while ( 1 )
    {
      if ( a6 == v22 )
      {
        if ( !(v10 ^ *((_QWORD *)&v20 + 1) | v9 ^ (unsigned __int64)v20) )
          return v33;
        if ( v23 == 64 && v20 == (unsigned __int64)(v29 + 1) )
        {
          v26 = a6 + 64;
          v31 = a1 * v29;
          if ( (unsigned __int64)(a6 + 64) > 0x7F )
          {
            v36 = v9;
            v37 = v10;
            log2ceil();
            v9 = v36;
            v10 = v37;
            v23 = 64;
            v28 = 1u;
          }
          else
          {
            v38 = v9;
            *((_QWORD *)&v27 + 1) = 1uLL >> -(char)a6;
            *(_QWORD *)&v27 = 1LL << v26;
            if ( (v26 & 0x40) != 0 )
            {
              *((_QWORD *)&v27 + 1) = 1LL << v26;
              *(_QWORD *)&v27 = 0;
            }
            v39 = v10;
            v34 = v27;
            log2ceil();
            v9 = v38;
            v10 = v39;
            v23 = 64;
            if ( v31 < v34 )
              goto LABEL_11;
            v28 = v34 + 1;
          }
          if ( v28 >= v31 && a1 > 1 )
            return v33;
        }
      }
LABEL_11:
      v24 = v19 >> 1;
      --v22;
      v25 = *((_QWORD *)&v19 + 1) >> 1;
      v20 = v14;
      v19 = (unsigned __int128)v19 >> 1;
      if ( __PAIR128__(v25, v24) >= v14 >> 1 || !v22 )
      {
        v11 = v22;
        break;
      }
      v14 >>= 1;
    }
  }
LABEL_3:
  v15 = v10 ^ DWORD2(v14);
  v16 = v10 ^ DWORD2(v14) | v9 ^ v14;
  LOBYTE(v15) = (v10 ^ *((_QWORD *)&v14 + 1) | v9 ^ (unsigned __int64)v14) == 0;
  LOBYTE(v16) = a6 == v11;
  return (unsigned int)(v16 & v15);
}

