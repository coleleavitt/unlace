unsigned __int64 __fastcall sub_1DFA0(_DWORD *a1)
{
  __int64 idati; // rax
  __int64 v2; // rdx
  const char ***v3; // rbx
  const char ***v4; // r12
  int v6; // eax
  char *v7; // rdi
  unsigned __int64 v8; // rax
  char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  idati = get_idati();
  v2 = *(int *)(idati + 16);
  if ( (int)v2 <= 0 )
  {
LABEL_6:
    v6 = a1[532];
    v9 = nullptr;
    v10 = 0;
    if ( v6 == 1 )
    {
      if ( a1[533] == 10 && a1[534] <= 0xEu )
      {
        sub_19AC0((__int64)&v9, "xnu_4903_x64");
        v8 = v10;
        v7 = v9;
      }
      else
      {
        v9 = (char *)qvector_reserve();
        *(_QWORD *)&v10 = 13;
        strcpy(v9, "xnu_6153_x64");
        v7 = v9;
        v8 = 13;
      }
    }
    else
    {
      if ( v6 != 2 )
        return v11 - __readfsqword(0x28u);
      if ( a1[533] > 0xCu )
      {
        v9 = (char *)qvector_reserve();
        *(_QWORD *)&v10 = 15;
        strcpy(v9, "xnu_6153_arm64");
      }
      else
      {
        v9 = (char *)qvector_reserve();
        *(_QWORD *)&v10 = 15;
        strcpy(v9, "xnu_4903_arm64");
      }
      v7 = v9;
      v8 = 15;
    }
    if ( v8 > 1 )
    {
      add_til();
      v7 = v9;
    }
    if ( v7 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  else
  {
    v3 = *(const char ****)(idati + 24);
    v4 = &v3[v2];
    while ( !strstr(**v3, "xnu") )
    {
      if ( v4 == ++v3 )
        goto LABEL_6;
    }
  }
  return v11 - __readfsqword(0x28u);
}

