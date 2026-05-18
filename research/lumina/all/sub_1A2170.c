__int64 __fastcall sub_1A2170(char *a1, char *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  int v7; // edi
  pthread_mutex_t *v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v10; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_1A1C90((__int64)&v9, a1, a2, 3);
  v2 = v10;
  if ( !v10 )
    v2 = sub_19FDE0((__int64)&v9);
  v3 = v9;
  sub_19ED80(v9);
  v4 = *(_DWORD *)(v3 + 5728);
  *(_QWORD *)(v3 + 5720) = 0;
  if ( v4 )
  {
    v5 = v4 - 1;
    *(_DWORD *)(v3 + 5728) = v5;
    if ( !v5 )
    {
      v7 = *(_DWORD *)(v3 + 5712);
      if ( v7 == -1 )
      {
        sub_19A570(*(pthread_mutex_t **)v3);
      }
      else
      {
        sub_1979E0(v7);
        v8 = *(pthread_mutex_t **)v3;
        *(_DWORD *)(v3 + 5712) = -1;
        sub_19A570(v8);
      }
    }
  }
  return v2;
}
