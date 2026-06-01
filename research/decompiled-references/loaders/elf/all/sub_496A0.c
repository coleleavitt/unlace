unsigned __int64 __fastcall sub_496A0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  bool v12; // zf
  __int64 v13; // rdi
  unsigned __int64 *v15; // rbp
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  unsigned __int64 *v19; // rdi
  __int64 *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-80h]
  unsigned __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v26; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 *v27[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = (char *)a5 - (char *)a4;
  v9 = a3;
  v12 = *(_BYTE *)(a2 + 248) == 0;
  v13 = *a1;
  v27[3] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( v12 || !*(_QWORD *)(a2 + 120) || *(_WORD *)(a2 + 520) != 1 )
  {
    v25 = (char *)a5 - (char *)a4;
    sub_45A20(v13, &v25, 1u, "Data size", a3, -1);
    v8 = v25;
    v15 = (unsigned __int64 *)((char *)a4 + v25);
    goto LABEL_4;
  }
  v25 = (char *)a5 - (char *)a4;
  v15 = a5;
  if ( a3 == -1 )
    a3 = qlseek(v13, 0, 1);
  v24 = a3;
  v17 = qlsize(v13) - a3;
  if ( ((v17 | v24) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v17) = 0;
LABEL_24:
    sub_EB70((__int64)"%s is incorrect, maximum possible value is %u%s", "Data size", v17, "");
  }
  if ( v17 < v8 )
    goto LABEL_24;
LABEL_4:
  if ( a6 )
    sub_41A40(a1, v9, (unsigned __int64)a4, (unsigned __int64)v15, a7, a8);
  file2base(*a1, v9, a4, v15, 1);
  v26 = a4;
  v27[0] = a4;
  v27[1] = v15;
  if ( (unsigned __int8)rangeset_t_add(a1 + 42, v27) )
  {
    v18 = (__int64 *)a1[49];
    if ( v18 )
    {
      v19 = v26;
      v20 = a1 + 48;
      do
      {
        while ( 1 )
        {
          v21 = v18[2];
          v22 = v18[3];
          if ( v18[4] < (unsigned __int64)v26 )
            break;
          v20 = v18;
          v18 = (__int64 *)v18[2];
          if ( !v21 )
            goto LABEL_19;
        }
        v18 = (__int64 *)v18[3];
      }
      while ( v22 );
LABEL_19:
      if ( v20 != a1 + 48 && (unsigned __int64)v26 >= v20[4] )
        goto LABEL_22;
    }
    else
    {
      v20 = a1 + 48;
    }
    v27[0] = (unsigned __int64 *)&v26;
    v23 = sub_49510(a1 + 47, v20, (__int64)&unk_7A3B4, v27);
    v19 = v26;
    v20 = v23;
LABEL_22:
    v20[5] = (__int64)v19;
    v20[6] = (__int64)v15;
    v20[7] = v9;
  }
  return v8;
}
