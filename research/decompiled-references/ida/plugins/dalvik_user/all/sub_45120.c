unsigned __int64 __fastcall sub_45120(__int64 *a1, char a2)
{
  const char *v2; // r15
  size_t v3; // r12
  __int64 v4; // rbp
  size_t v5; // r13
  __int64 v6; // rsi
  __int64 v8; // rax
  const char *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  if ( a2 == 1 )
  {
    v3 = 21;
    v2 = "suspend EVENT_THREAD,";
  }
  else if ( a2 == 2 )
  {
    v3 = 12;
    v2 = "suspend ALL,";
  }
  else if ( a2 )
  {
    sub_13B20((__int64 *)&v9);
    v2 = nptr;
    if ( (_QWORD)v10 )
    {
      v2 = v9;
      if ( !v9 )
        goto LABEL_13;
    }
    else if ( !nptr )
    {
      goto LABEL_13;
    }
    v3 = strlen(v2);
  }
  else
  {
    v3 = 13;
    v2 = "suspend NONE,";
  }
  v4 = a1[1];
  v5 = v3;
  if ( v4 )
    v5 = --v4 + v3;
  v6 = *a1;
  if ( a1[2] < v5 + 1 )
  {
    v8 = qvector_reserve();
    *a1 = v8;
    v6 = v8;
  }
  a1[1] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 0;
  memmove((void *)(v4 + *a1), v2, v3);
LABEL_13:
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

