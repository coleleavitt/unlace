// Alternative name is '_ZN5boost4asio17execution_contextD1Ev'
void __fastcall boost::asio::execution_context::~execution_context(void (__fastcall ****this)(void *a1))
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64, __int64, __int64); // rax
  void (__fastcall ***v7)(void *); // rbx
  void (__fastcall **v8)(void *); // rax
  void (__fastcall ***v9)(void *); // rdi

  v1 = (__int64)*(this + 1);
  v2 = *(_QWORD **)(v1 + 56);
  if ( !v2 )
    goto LABEL_9;
  do
  {
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
    v2 = (_QWORD *)v2[4];
  }
  while ( v2 );
  v1 = (__int64)*(this + 1);
  v3 = *(_QWORD *)(v1 + 56);
  if ( v3 )
  {
    do
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 32);
      (*(void (__fastcall **)(__int64))(v4 + 40))(v4);
      *(_QWORD *)(v1 + 56) = v3;
    }
    while ( v3 );
    v1 = (__int64)*(this + 1);
    v5 = (__int64)*this;
    pthread_mutex_destroy((pthread_mutex_t *)(v1 + 8));
    v6 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v5 + 16LL);
    if ( v6 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    {
      if ( !v1 )
        goto LABEL_7;
      goto LABEL_10;
    }
  }
  else
  {
LABEL_9:
    v5 = (__int64)*this;
    pthread_mutex_destroy((pthread_mutex_t *)(v1 + 8));
    v6 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v5 + 16LL);
    if ( v6 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    {
LABEL_10:
      operator delete((void *)(v1 - *(_QWORD *)(v1 + 64)), 0x4Fu);
      goto LABEL_7;
    }
  }
  v6(v5, v1, 64, 8);
LABEL_7:
  v7 = *this;
  v8 = **this;
  v9 = *this;
  if ( *v8 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::destroy )
  {
    v8[3](v9);
    operator delete(v7, 0x10u);
  }
  else
  {
    (*v8)(v9);
  }
}

