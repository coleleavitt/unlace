__int64 __fastcall sub_27720(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r12
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int128 v7; // [rsp+8h] [rbp-50h]
  char *v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = a1;
  v6 = 0;
  v7 = 0;
  v8 = nullptr;
  v9 = 0;
  v2 = *(_QWORD *)(a1 + 864);
  v8 = (char *)qvector_reserve();
  *(_QWORD *)&v9 = 15;
  strcpy(v8, "qRegisterInfo0");
  if ( (int)sub_5ABF0(v2, (unsigned int)&v8, 1734693489, 1232233844, v3, v4) > 0
    && (unsigned __int8)sub_5ABB0(*(_QWORD *)(a1 + 864), &v6) )
  {
    LOBYTE(v1) = (unsigned int)sub_59CB0(&v6, 0) == 1;
  }
  else
  {
    v1 = 0;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v1;
}

