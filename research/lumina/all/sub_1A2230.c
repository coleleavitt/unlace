__int64 __fastcall sub_1A2230(char **a1, char *a2, char a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v9; // edi
  pthread_mutex_t *v10; // rdi
  int v11[2]; // [rsp+0h] [rbp-48h] BYREF
  void *v12; // [rsp+18h] [rbp-30h]

  v12 = (void *)__readfsqword(0x28u);
  *(_QWORD *)v11 = 0;
  sub_1A1C90((__int64)v11, nullptr, a2, 0);
  v4 = *(_QWORD *)v11;
  v5 = sub_19EAD0(v11, a1, a3);
  sub_19ED80(v4);
  v6 = *(_DWORD *)(v4 + 5728);
  *(_QWORD *)(v4 + 5720) = 0;
  if ( v6 )
  {
    v7 = v6 - 1;
    *(_DWORD *)(v4 + 5728) = v7;
    if ( !v7 )
    {
      v9 = *(_DWORD *)(v4 + 5712);
      if ( v9 == -1 )
      {
        sub_19A570(*(pthread_mutex_t **)v4);
      }
      else
      {
        sub_1979E0(v9);
        v10 = *(pthread_mutex_t **)v4;
        *(_DWORD *)(v4 + 5712) = -1;
        sub_19A570(v10);
      }
    }
  }
  return v5;
}
