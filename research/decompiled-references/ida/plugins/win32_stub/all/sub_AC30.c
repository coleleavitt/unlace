__int64 __fastcall sub_AC30(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  size_t v9; // rax
  void *v11; // rdi
  size_t v12; // r8
  size_t v13; // rdx
  __int64 v14; // rax
  size_t v15; // [rsp+0h] [rbp-1058h]
  size_t v16; // [rsp+0h] [rbp-1058h]
  size_t v17; // [rsp+8h] [rbp-1050h]
  char s[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v19; // [rsp+1018h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  getinf_buf();
  v9 = strlen(s);
  if ( v9 )
  {
    v11 = (void *)a1[132];
    v12 = v9;
    v13 = v9 + 1;
    if ( a1[134] < v9 + 1 )
    {
      v17 = v9;
      v16 = v9 + 1;
      v14 = qvector_reserve();
      v12 = v17;
      v13 = v16;
      a1[132] = v14;
      v11 = (void *)v14;
    }
    a1[133] = v13;
    v15 = v12;
    memmove(v11, s, v12);
    *(_BYTE *)(a1[132] + v15) = 0;
  }
  else
  {
    a1[133] = 0;
  }
  return sub_216A0(a1, a2, a3, a4, a5);
}

