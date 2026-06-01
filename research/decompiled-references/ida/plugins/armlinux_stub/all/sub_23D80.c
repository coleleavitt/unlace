__int64 __fastcall sub_23D80(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  void (*v12)(); // rax
  const char *v13; // rax
  const char *v14; // rbx
  size_t v15; // rax
  size_t v16; // rbp
  void *v17; // rdi
  size_t v18; // r12
  __int64 v19; // rax
  _QWORD v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a1;
  v20[1] = __readfsqword(0x28u);
  v4 = *(__int64 (**)(void))(v3 + 24);
  if ( (char *)v4 == (char *)sub_23C20 )
    v5 = a1[12];
  else
    v5 = v4();
  if ( !v5 || *((_BYTE *)a1 + 8) )
  {
    return (unsigned int)-1;
  }
  else
  {
    sub_24D80(a2);
    v6 = *a2;
    v7 = a2[1];
    sub_23780(v20, v5, 0, v7);
    while ( 1 )
    {
      if ( v7 <= 0 )
      {
        v10 = 0;
        goto LABEL_10;
      }
      v8 = sub_23520(v5);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v7 -= v8;
      v6 += v8;
      sub_237C0(v20);
    }
    v12 = *(void (**)())(*a1 + 48);
    if ( v12 != nullsub_1 )
      ((void (__fastcall *)(__int64 *, __int64))v12)(a1, v9);
    *((_BYTE *)a1 + 8) = 1;
    if ( (unsigned int)sub_23540(v5) != -15059582 )
    {
      v13 = (const char *)sub_23550(v5);
      v14 = v13;
      if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
      {
        v17 = (void *)a1[2];
        v18 = v15 + 1;
        if ( a1[4] < v15 + 1 )
        {
          v19 = qvector_reserve();
          a1[2] = v19;
          v17 = (void *)v19;
        }
        a1[3] = v18;
        memmove(v17, v14, v16);
        *(_BYTE *)(a1[2] + v16) = 0;
      }
      else
      {
        a1[3] = 0;
      }
    }
    v10 = -1;
LABEL_10:
    sub_237A0(v20);
  }
  return v10;
}

