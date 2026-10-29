void __fastcall sub_36040(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        const char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // [rsp+0h] [rbp-48h]

  v8 = a5;
  v10 = *a2;
  if ( a5 == -1 )
    v8 = qlseek();
  if ( a6 == -1 )
    a6 = qlsize();
  v11 = a6 - v8;
  if ( ((v11 | v8) & 0x8000000000000000LL) != 0LL )
  {
    v13 = 0;
LABEL_12:
    *a2 = v13;
    if ( (unsigned int)sub_14DE0(
                         1u,
                         (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                         a4,
                         v10,
                         v13,
                         ". Do you want to continue with the new value?") != 1 )
      sub_1BE60(
        0,
        (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
        v14,
        v15,
        v16,
        v17,
        v18);
    return;
  }
  v12 = *a2;
  if ( *a2 && a3 && !is_mul_ok(v12, a3) || v11 < a3 * v12 )
  {
    v13 = v11 / a3;
    goto LABEL_12;
  }
}

