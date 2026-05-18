__int64 __fastcall sub_FE260(__int64 *a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5, double a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v11; // r15d
  int v13; // eax
  int v14; // eax
  __m128i *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 *v23; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-90h]
  unsigned int v25; // [rsp+2Ch] [rbp-8Ch]
  int v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  __int64 *v28; // [rsp+40h] [rbp-78h] BYREF
  void *v29; // [rsp+48h] [rbp-70h]
  __int64 (__fastcall *v30)(__int64); // [rsp+50h] [rbp-68h]
  __int16 v31; // [rsp+64h] [rbp-54h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v6 = a2;
  if ( (*(_DWORD *)(a2 + 4) & 0x2002000) != 0 )
    return 0;
  v7 = *(_QWORD *)(a2 + 80);
  v8 = (__int64)a3;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( !*(_QWORD *)(a2 + 112) )
      {
        while ( !*(_QWORD *)(v7 + 112) )
        {
          v7 = *(_QWORD *)(v7 + 80);
          if ( !v7 )
            goto LABEL_8;
        }
      }
      return 0;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a2 + 112);
    if ( v21 && !*(_QWORD *)(v21 + 16) )
      return 0;
  }
LABEL_8:
  if ( *(_QWORD *)(a2 + 96) )
    return 0;
  v11 = 0;
  if ( *a3 == 44 )
  {
    do
    {
      v13 = sub_FE260(a1, a2, *(_QWORD *)(v8 + 24), a4, a5);
      v8 = *(_QWORD *)(v8 + 16);
      v11 += v13;
    }
    while ( *(_BYTE *)v8 == 44 );
  }
  v14 = *(_DWORD *)(v8 + 4) & 1;
  if ( a5 )
  {
    if ( !v14 )
      return 0;
  }
  else if ( !v14 )
  {
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v8 + 52) != a4 )
    return 0;
LABEL_16:
  v31 = 3;
  LODWORD(v32) = a4;
  v29 = sub_CE7B0;
  v30 = sub_C43E0;
  if ( !v8 || (sub_CDCD0((__int64)&v28, v8), v31) )
  {
    *(_DWORD *)(a2 + 4) |= 0x1000000u;
    if ( a2 )
    {
      while ( 1 )
      {
        v15 = nullptr;
        if ( v8 )
          v15 = sub_DD6E0(*a1, v8, 0, nullptr);
        sub_C4CD0((__int64)v15, -1);
        v16 = *(_QWORD *)(v6 + 32);
        v23 = a1;
        v24 = a4;
        v25 = a4;
        v26 = 0;
        v27 = v16;
        v18 = sub_FDE00((__int64)&v23, v17, a6);
        v19 = *(_QWORD *)(v6 + 112);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 16);
          v31 = 1;
          v30 = nullptr;
          v29 = sub_F9A20;
          v28 = a1;
          v32 = v20;
          if ( v18 )
          {
            v22 = (__int64)v18;
            sub_CDCD0((__int64)&v28, (__int64)v18);
            v18 = (__int64 *)v22;
            if ( !v31 )
              break;
          }
        }
        if ( (*(_BYTE *)(v6 + 4) & 8) != 0 )
          *(_QWORD *)(v6 + 64) = sub_F07D0((__int64)a1, *(_QWORD *)(v6 + 64), (__int64)v18);
        else
          *(_QWORD *)(v6 + 48) = sub_F07D0((__int64)a1, *(_QWORD *)(v6 + 48), (__int64)v18);
        v6 = *(_QWORD *)(v6 + 80);
        if ( !v6 )
          goto LABEL_34;
      }
      sub_D7720(*a1, v22);
    }
    else
    {
LABEL_34:
      ++v11;
    }
  }
  return v11;
}
