__int64 __fastcall sub_30460(__int64 a1, __int64 *a2, const char *a3, double a4, double a5, double a6)
{
  size_t v6; // r14
  char *v7; // rbx
  unsigned int v8; // ebx
  void *dest; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v6 = 1;
  v7 = "";
  v14 = __readfsqword(0x28u);
  dest = nullptr;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  if ( a3 )
  {
    v7 = (char *)a3;
    v6 = strlen(a3) + 1;
  }
  dest = (void *)qvector_reserve(&dest, 0, v6, 1);
  memset((char *)dest + v11, 0, v6 - v11);
  *(_QWORD *)&v11 = v6;
  memcpy(dest, v7, v6);
  if ( (unsigned int)sub_2F320(a1, 0xEu, (__int64)&dest, &v12, 0.0, a5, a6) == 1 )
    v8 = sub_2EED0(a1, a2, &v12);
  else
    v8 = -2147467259;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  if ( dest )
  {
    *(_QWORD *)&v11 = 0;
    qfree(dest);
  }
  return v8;
}

