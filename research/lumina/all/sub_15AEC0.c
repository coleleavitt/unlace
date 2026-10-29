__int64 __fastcall sub_15AEC0(
        __int64 *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, _QWORD, _QWORD),
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  int v7; // r12d
  __int64 *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ebx
  int v15; // r12d
  const char *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  const char *v27; // rax
  __int64 v28; // [rsp-8h] [rbp-70h]
  _QWORD v29[2]; // [rsp+0h] [rbp-68h] BYREF
  int v30; // [rsp+10h] [rbp-58h]
  int v31; // [rsp+14h] [rbp-54h]
  int v32; // [rsp+18h] [rbp-50h]
  __int16 v33; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v7 = a4;
  v8 = (__int64 *)a5;
  v9 = *a1;
  v34 = __readfsqword(0x28u);
  sub_11E730(a1, a2, a3, a4, a5, a6);
  v14 = ((*(_BYTE *)(*(_QWORD *)(v9 + 32) + 9LL) >> 5) ^ 1) & 1;
  if ( v7 > 0 )
  {
    v15 = v14 + v7;
    do
    {
      v16 = (const char *)sub_D9DB0(*v8, 1u, a7, v10, v11, v12, v13);
      if ( v16 )
      {
        v17 = sub_105970("%s", v16);
        v10 = v14;
        a1[v14 + 3] = (__int64)v17;
        if ( !v17 )
          return 7;
      }
      ++v14;
      ++v8;
    }
    while ( v14 != v15 );
  }
  v18 = *(_QWORD *)(v9 + 24);
  v29[1] = 0;
  v29[0] = 0;
  v30 = 0;
  LODWORD(v18) = *(_DWORD *)(v18 + 140);
  v32 = 0;
  v33 = 0;
  v31 = v18;
  sub_DFDD0((__int64)v29, "PRAGMA ");
  if ( a1[4] )
    sub_DBBA0((__int64)v29, "%Q.");
  sub_DFDD0((__int64)v29, **(const char ***)(v9 + 32));
  if ( a1[3] )
    sub_DBBA0((__int64)v29, "=%Q");
  v19 = sub_DC130((__int64)v29);
  v20 = (__int64)v19;
  if ( !v19 )
    return 7;
  v21 = (__int64)v19;
  v22 = sub_157230(*(_QWORD *)(v9 + 24), (__int64)v19, -1, 128, 0, a1 + 1, nullptr);
  sub_C91C0(v20, v21);
  if ( v22 )
  {
    v27 = sub_EEFB0(*(_QWORD *)(v9 + 24), v21, v28, a7, v23, v24, v25);
    *(_QWORD *)(v9 + 16) = sub_105970("%s", v27);
  }
  else
  {
    return (unsigned int)sub_142D40(a1, v21, a7);
  }
  return v22;
}
