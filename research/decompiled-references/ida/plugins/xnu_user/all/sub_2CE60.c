__int64 __fastcall sub_2CE60(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r12
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int128 v7; // [rsp+8h] [rbp-50h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  char *v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v1 = a1;
  v6 = 0;
  v7 = 0;
  v9 = nullptr;
  v10 = 0;
  v2 = *(_QWORD *)(a1 + 864);
  v9 = (char *)qvector_reserve();
  LODWORD(v10) = 15;
  strcpy(v9, "qRegisterInfo0");
  if ( (int)sub_65730(
              v2,
              (unsigned int)&v9,
              1734693489,
              1232233844,
              v3,
              v4,
              0,
              v7,
              DWORD2(v7),
              v8,
              (__int64)v9,
              v10,
              *((__int64 *)&v10 + 1)) > 0
    && (unsigned __int8)sub_656F0(*(_QWORD *)(a1 + 864), &v6) )
  {
    LOBYTE(v1) = (unsigned int)sub_64800(&v6, 0) == 1;
  }
  else
  {
    v1 = 0;
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v1;
}

