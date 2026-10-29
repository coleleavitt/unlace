__int64 __fastcall sub_36960(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v6; // rax
  size_t v7; // r14
  unsigned int v8; // ebx
  size_t v10; // [rsp+0h] [rbp-70h]
  __int64 v11; // [rsp+10h] [rbp-60h]
  void *v12; // [rsp+18h] [rbp-58h] BYREF
  __int128 v13; // [rsp+20h] [rbp-50h]
  unsigned __int64 v14; // [rsp+30h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  v12 = nullptr;
  if ( a3 && (v6 = strlen((const char *)a3), (v7 = v6) != 0) )
  {
    v10 = v6 + 1;
    v12 = (void *)qvector_reserve();
    *(_QWORD *)&v13 = v10;
    memmove(v12, a3, v7);
    *((_BYTE *)v12 + v7) = 0;
    if ( a4 <= 1 )
      goto LABEL_4;
  }
  else if ( a4 <= 1 )
  {
    goto LABEL_4;
  }
  sub_1FAD0((__int64 *)&v12);
LABEL_4:
  netnode_check();
  *a2 = v11;
  v8 = netnode_exist();
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v8;
}

