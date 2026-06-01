__int64 __fastcall sub_1836F0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, int a5)
{
  int v5; // r12d
  unsigned int v7; // ebp
  char v9[8]; // [rsp+0h] [rbp-48h] BYREF
  char *v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v5 = a4;
  v11 = __readfsqword(0x28u);
  sub_123A40((__int64)v9, a3, (__int64)a3, a4);
  sub_183610(a1, (__int64)v9);
  if ( v9[0] == 10 )
  {
    v7 = 0;
    if ( *v10 != 6 )
      goto LABEL_3;
    sub_11CA10((char *)a2, v10);
LABEL_8:
    *(_DWORD *)(a2 + 4) = v5;
    v7 = 1;
    goto LABEL_3;
  }
  v7 = 0;
  if ( v9[0] == 3 )
  {
    sub_11CA10((char *)a2, v9);
    if ( !v5 )
      v5 = a5 * (sub_331FE0(*(char **)(a2 + 8), nullptr) + 1);
    goto LABEL_8;
  }
LABEL_3:
  sub_11CDA0((__int64)v9);
  return v7;
}

