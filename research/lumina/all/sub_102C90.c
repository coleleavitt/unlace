void __fastcall sub_102C90(__int64 **a1, __int64 a2, double a3, __int64 a4, int a5, int a6, __int64 a7)
{
  unsigned __int8 v8; // al
  const void *v9; // r12
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 *v19; // rax
  __int64 v20; // rdi
  bool v21; // zf

  v8 = byte_1BAD40[*(_WORD *)(a2 + 20) & 0x3F];
  if ( v8 == 3 )
  {
    v9 = (const void *)sub_D9DB0(a2, 1u, a3, (__int64)byte_1BAD40, a5, a6, a7);
    v14 = sub_D9CE0(a2, 1u, a3, v15, v16, v17, v18);
    if ( (*(_BYTE *)(a2 + 21) & 8) == 0 || *(_BYTE *)(a2 + 23) != 74 )
    {
      sub_102A10(a1, (__int64)v9, v14);
      return;
    }
    goto LABEL_5;
  }
  if ( v8 > 3u )
  {
    if ( v8 == 5 )
    {
      sub_102C40(a1, "null", 4u);
      return;
    }
  }
  else if ( v8 )
  {
    v9 = (const void *)sub_D9DB0(a2, 1u, a3, (__int64)byte_1BAD40, a5, a6, a7);
    v14 = sub_D9CE0(a2, 1u, a3, v10, v11, v12, v13);
LABEL_5:
    if ( v14 )
      sub_102C40(a1, v9, v14);
    return;
  }
  if ( !*((_BYTE *)a1 + 33) )
  {
    v19 = *a1;
    v20 = **a1;
    *((_DWORD *)v19 + 9) = 1;
    sub_F11D0(v20, "JSON cannot hold BLOB values", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, a7);
    v21 = *((_BYTE *)a1 + 32) == 0;
    *((_BYTE *)a1 + 33) = 2;
    if ( v21 )
      sub_C91C0((__int64)a1[1], (__int64)"JSON cannot hold BLOB values");
    a1[2] = &qword_60 + 4;
    a1[3] = nullptr;
    *((_BYTE *)a1 + 32) = 1;
    a1[1] = (__int64 *)((char *)a1 + 34);
  }
}
