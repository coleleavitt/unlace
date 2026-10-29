unsigned __int64 __fastcall sub_1A1FB0(char *a1, char *a2, char *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // edi
  pthread_mutex_t *v10; // rdi
  int v11[2]; // [rsp+0h] [rbp-38h] BYREF
  int v12[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v12 = __readfsqword(0x28u);
  *(_QWORD *)v11 = 0;
  sub_1A1C90((__int64)v11, a1, a2, 1);
  v4 = *(_QWORD *)v11;
  if ( a3 )
  {
    v5 = strlen(a3);
    sub_1A0A50(v4, 1, a3, v5);
  }
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
  return *(_QWORD *)v12 - __readfsqword(0x28u);
}
