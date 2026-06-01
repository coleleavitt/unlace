__int64 __fastcall sub_2740(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  size_t v8; // rax
  unsigned int v9; // ebx
  size_t v11; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-70h]
  char v13[8]; // [rsp+10h] [rbp-68h] BYREF
  _OWORD v14[2]; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v13[0] = 2;
  memset(v14, 0, 24);
  free_idcv();
  if ( a4 )
  {
    v8 = strlen(a4);
    v13[0] = 7;
    memset(v14, 0, 24);
    if ( v8 )
    {
      n = v8;
      v11 = v8 + 1;
      *(_QWORD *)&v14[0] = qvector_reserve();
      *((_QWORD *)&v14[0] + 1) = v11;
      memmove(*(void **)&v14[0], a4, n);
      *(_BYTE *)(*(_QWORD *)&v14[0] + n) = 0;
    }
  }
  else
  {
    v13[0] = 7;
    memset(v14, 0, 24);
  }
  v9 = sub_4D20(a1, a2, a3, 1, v13, a5);
  free_idcv();
  return v9;
}

