__int64 __fastcall sub_F8A0(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4, unsigned __int8 a5)
{
  size_t v9; // rax
  size_t v10; // r14
  const char *v11; // rsi
  unsigned int v12; // ebx
  size_t v14; // [rsp+0h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-60h] BYREF
  void *v16; // [rsp+18h] [rbp-58h] BYREF
  __int128 v17; // [rsp+20h] [rbp-50h]
  unsigned __int64 v18; // [rsp+30h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  if ( a3 && (v9 = strlen((const char *)a3), (v10 = v9) != 0) )
  {
    v14 = v9 + 1;
    v16 = (void *)qvector_reserve(&v16, 0, v9 + 1, 1);
    *(_QWORD *)&v17 = v14;
    memmove(v16, a3, v10);
    *((_BYTE *)v16 + v10) = 0;
    if ( a4 <= 1 )
      goto LABEL_10;
  }
  else if ( a4 <= 1 )
  {
LABEL_4:
    v11 = (const char *)&unk_150C8;
    goto LABEL_5;
  }
  sub_F7E0((__int64 *)&v16, (__int64)"%u", a4);
LABEL_10:
  v11 = (const char *)v16;
  if ( !(_QWORD)v17 )
    goto LABEL_4;
LABEL_5:
  netnode_check(&v15, v11, 0, a5);
  *a2 = v15;
  v12 = netnode_exist(a2);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v11);
  }
  return v12;
}

