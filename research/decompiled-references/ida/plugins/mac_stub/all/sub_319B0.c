__int64 __fastcall sub_319B0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 (*v9)(void); // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // eax
  void (*v15)(); // rdx
  const char *v16; // rax
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // rbp
  unsigned int v20; // ebx
  void *v22; // rdi
  size_t v23; // r12
  __int64 v24; // rax
  int v25; // [rsp+Ch] [rbp-4Ch]
  _QWORD v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *a1;
  v26[1] = __readfsqword(0x28u);
  v9 = *(__int64 (**)(void))(v7 + 24);
  if ( (char *)v9 == (char *)sub_316A0 )
    v10 = a1[12];
  else
    v10 = v9();
  sub_31200(v26, v10, 1u, a3);
  if ( !a3 )
  {
LABEL_17:
    v20 = 0;
    goto LABEL_18;
  }
  do
  {
    while ( 1 )
    {
      v11 = a4;
      if ( (int)sub_30FE0(v10) <= 0 )
        break;
      v11 = a2;
      v12 = sub_30FB0(v10);
      v13 = v12;
      if ( v12 <= 0 )
        goto LABEL_6;
      a3 -= v12;
      a2 += v12;
      sub_31240(v26);
      if ( !a3 )
        goto LABEL_17;
    }
    v13 = -1;
LABEL_6:
    v14 = sub_30FC0(v10);
  }
  while ( v14 == -21015 );
  v15 = *(void (**)())(*a1 + 48);
  if ( v15 != nullsub_1 )
  {
    v25 = v14;
    ((void (__fastcall *)(__int64 *, __int64))v15)(a1, v11);
    v14 = v25;
  }
  if ( v13 )
  {
    *((_BYTE *)a1 + 8) = 1;
    if ( v14 != -15059582 )
    {
      v16 = (const char *)sub_30FD0(v10);
      v17 = v16;
      if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
      {
        v22 = (void *)a1[2];
        v23 = v18 + 1;
        if ( a1[4] < v18 + 1 )
        {
          v24 = qvector_reserve();
          a1[2] = v24;
          v22 = (void *)v24;
        }
        a1[3] = v23;
        memmove(v22, v17, v19);
        *(_BYTE *)(a1[2] + v19) = 0;
      }
      else
      {
        a1[3] = 0;
      }
    }
  }
  v20 = -1;
LABEL_18:
  sub_31220(v26);
  return v20;
}

