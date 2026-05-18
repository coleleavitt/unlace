__int64 __fastcall sub_1A1E20(char *a1, unsigned __int8 a2, int a3, char *a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v10; // edi
  pthread_mutex_t *v11; // rdi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[3] = __readfsqword(0x28u);
  v12[0] = 0;
  sub_1A1C90((__int64)v12, a1, a4, a2);
  v5 = v12[0];
  v6 = sub_1A0EF0((__int64)v12, a3);
  sub_19ED80(v5);
  v7 = *(_DWORD *)(v5 + 5728);
  *(_QWORD *)(v5 + 5720) = 0;
  if ( v7 )
  {
    v8 = v7 - 1;
    *(_DWORD *)(v5 + 5728) = v8;
    if ( !v8 )
    {
      v10 = *(_DWORD *)(v5 + 5712);
      if ( v10 == -1 )
      {
        sub_19A570(*(pthread_mutex_t **)v5);
      }
      else
      {
        sub_1979E0(v10);
        v11 = *(pthread_mutex_t **)v5;
        *(_DWORD *)(v5 + 5712) = -1;
        sub_19A570(v11);
      }
    }
  }
  return v6;
}
