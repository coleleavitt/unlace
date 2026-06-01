void __fastcall sub_254B0(__int64 a1, _DWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // [rsp+0h] [rbp-48h]

  v7 = a5;
  if ( a5 == -1 )
    v7 = qlseek();
  if ( a6 == -1 )
    a6 = qlsize();
  v9 = a6 - v7;
  if ( ((v9 | v7) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v11) = 0;
LABEL_12:
    *a2 = v11;
    if ( (unsigned int)sub_19F30() != 1 )
      sub_1A260(
        0,
        (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
        v12,
        v13,
        v14,
        v15,
        v16);
    return;
  }
  v10 = (unsigned int)*a2;
  if ( *a2 && a3 && !is_mul_ok(v10, a3) || v9 < a3 * v10 )
  {
    v11 = v9 / a3;
    goto LABEL_12;
  }
}

