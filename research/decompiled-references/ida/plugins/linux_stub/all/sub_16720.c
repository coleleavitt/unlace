__int64 __fastcall sub_16720(__int64 a1, const char *a2)
{
  char *v2; // r12
  size_t v3; // rax
  __int64 v4; // rbx
  size_t v5; // r15
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v2 = (char *)a2;
  sub_267D0(&v11, 43);
  if ( !a2 )
  {
    v4 = v12;
    v5 = 1;
    v2 = "";
    v6 = v12 + 1;
    if ( v12 == -1 )
    {
      v4 = -1;
      v2 = "";
      v12 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  v3 = strlen(a2);
  v4 = v12;
  v5 = v3 + 1;
  v6 = v3 + 1 + v12;
  if ( !__CFADD__(v3 + 1, v12) )
  {
LABEL_3:
    v7 = v11;
    v8 = v4;
    if ( v13 < v6 )
    {
      v11 = qvector_reserve();
      v7 = v11;
      v8 = v12;
    }
    memset((void *)(v7 + v8), 0, v6 - v8);
    v12 = v6;
    goto LABEL_6;
  }
  if ( v12 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_3;
  }
  if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v11 + v4), v2, v5);
  v9 = sub_233C0(a1 + 864, &v11, 0xFFFFFFFFLL, 0);
  if ( v11 )
  {
    v12 = 0;
    qfree();
  }
  return v9;
}

