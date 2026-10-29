void __fastcall sub_2AA60(__int64 a1, unsigned int *a2, unsigned __int64 a3, const char *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned int v10; // r15d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+0h] [rbp-48h]

  v7 = a5;
  v10 = *a2;
  if ( a5 == -1 )
    v7 = qlseek();
  if ( a6 == -1 )
    a6 = qlsize();
  v11 = a6 - v7;
  if ( ((v11 | v7) & 0x8000000000000000LL) != 0LL )
  {
    v14 = 0;
    LODWORD(v13) = 0;
LABEL_12:
    *a2 = v13;
    if ( (unsigned int)sub_13E80(
                         1u,
                         (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                         a4,
                         v10,
                         v14,
                         ". Do you want to continue with the new value?") != 1 )
      sub_27E60(
        0,
        (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
        v15,
        v16,
        v17,
        v18,
        v19);
    return;
  }
  v12 = *a2;
  if ( *a2 && a3 && !is_mul_ok(v12, a3) || v11 < a3 * v12 )
  {
    v13 = v11 / a3;
    v14 = (unsigned int)(v11 / a3);
    goto LABEL_12;
  }
}

